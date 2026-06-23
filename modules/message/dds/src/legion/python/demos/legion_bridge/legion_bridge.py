import argparse
import time
import sys

import fastdds_obu_cmd_msg
import fastdds_events
import fastdds_faults
import fastdds_chassis
import fastdds_vehicle
import fastdds_routing_request
import fastdds_control_command
import fastdds_vehicle_task

#Argument parsing
#############################################

parser = argparse.ArgumentParser(
    description='Run a simple FastDDS publisher or subscriber.')
parser.add_argument('endpoint', action='store',
                    choices=['publisher', 'subscriber'],
                    help='the kind of endpoint to create')
parser.add_argument('--domain', action='store', default=0, type=int,
                    help='domain identifier')
parser.add_argument('--topic', action='store', default='topic',
                    help='topic name')

args = parser.parse_args()


# Loop for the publisher
if (args.endpoint == 'publisher'):

    # Create a publisher on the topic
    try:
        routing_request_pub = fastdds_routing_request.RoutingRequestDataWriter(0, "rt/legion_bridge/RoutingRequest")
        obu_cmd_msg_pub = fastdds_obu_cmd_msg.ObuCmdMsgDataWriter(0, "rt/legion_bridge/ObuCmdMsg")
        vehicle_task_pub = fastdds_vehicle_task.VehicleTaskDataWriter(0, "rt/legion_bridge/VehicleTask")
        control_command_output_pub = fastdds_control_command.ControlCommandDataWriter(0, "rt/legion_bridge/TeleopControlCommand")
        faults_pub = fastdds_faults.FaultsDataWriter(0, "rt/legion_bridge/Faults")
    except Exception as e:
        print('Error creating publisher: {error}'.format(
            error=e.__class__))
        sys.exit(-1)

    # Create the message to send
    routing_request = fastdds_routing_request.RoutingRequest()
    obu_cmd_msg = fastdds_obu_cmd_msg.ObuCmdMsg()
    vehicle_task = fastdds_vehicle_task.VehicleTask()
    control_command_output = fastdds_control_command.ControlCommand()
    faults = fastdds_faults.Faults()
   

    try:
        counter = 0
        while True:
            # Set the index in the message
            counter = counter + 1
            # publish
            routing_request_pub.write_sample(routing_request)
            obu_cmd_msg_pub.write_sample(obu_cmd_msg)
            vehicle_task_pub.write_sample(vehicle_task)
            control_command_output_pub.write_sample(control_command_output)
            faults_pub.write_sample(faults)
            print("success")
            #pub1.write_sample(msg1)
            time.sleep(1)
    except KeyboardInterrupt:
        print ('Shutdown requested...exiting')

# Loop for the subscriber
else:

    # Create a publisher on the topic
    try:
        control_command_input_sub = fastdds_control_command.ControlCommandDataReader(0, "rt/control/ControlCommand")
        chassis_sub = fastdds_chassis.ChassisDataReader(0, "rt/drivers/canbus/Chassis")
        events_sub = fastdds_events.EventsDataReader(0, "rt/drivers/canbus/Events")
        vehicle_sub = fastdds_vehicle.VehicleDataReader(0, "rt/drivers/canbus/Vehicle")

    except Exception as e:
        print('Error creating subscriber: {error}'.format(
            error=e.__class__))
        sys.exit(-1)

    # Create the message to receive the data
    control_command_input = fastdds_control_command.ControlCommand()
    chassis = fastdds_chassis.Chassis()
    events = fastdds_events.Events()
    vehicle = fastdds_vehicle.Vehicle()

    try:
        while True:
            # Wait for a message for 2 seconds
            if (control_command_input_sub.wait_for_sample(2)):
                # Read the received message
                if (control_command_input_sub.take_sample(control_command_input)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (chassis_sub.wait_for_sample(2)):
                # Read the received message
                if (chassis_sub.take_sample(chassis)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (events_sub.wait_for_sample(2)):
                # Read the received message
                if (events_sub.take_sample(events)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (vehicle_sub.wait_for_sample(2)):
                # Read the received message
                if (vehicle_sub.take_sample(vehicle)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')


    except KeyboardInterrupt:
        print ('Shutdown requested...exiting')
