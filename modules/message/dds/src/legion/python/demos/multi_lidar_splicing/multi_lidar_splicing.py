import argparse
import time
import sys

import fastdds_point_cloud

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
        point_cloud_output_pub = fastdds_point_cloud.PointCloudDataWriter(0, "rt/perception/lidar/multi_lidar_splicing/PointCloud")
    except Exception as e:
        print('Error creating publisher: {error}'.format(
            error=e.__class__))
        sys.exit(-1)

    # Create the message to send
    point_cloud_output = fastdds_point_cloud.PointCloud()
   

    try:
        counter = 0
        while True:
            # Set the index in the message
            counter = counter + 1
            # publish
            point_cloud_output_pub.write_sample(point_cloud_output)
            print("success")
            #pub1.write_sample(msg1)
            time.sleep(1)
    except KeyboardInterrupt:
        print ('Shutdown requested...exiting')

# Loop for the subscriber
else:

    # Create a publisher on the topic
    try:
        lidar_back_sub = fastdds_point_cloud.PointCloudDataReader(0, "rtLidarBack")
        lidar_front_sub = fastdds_point_cloud.PointCloudDataReader(0, "rtLidarFront")
        lidar_left_sub = fastdds_point_cloud.PointCloudDataReader(0, "rtLidarLeft")
        lidar_right_sub = fastdds_point_cloud.PointCloudDataReader(0, "rtLidarRight")

    except Exception as e:
        print('Error creating subscriber: {error}'.format(
            error=e.__class__))
        sys.exit(-1)

    # Create the message to receive the data
    lidar_back = fastdds_point_cloud.PointCloud()
    lidar_front = fastdds_point_cloud.PointCloud()
    lidar_left = fastdds_point_cloud.PointCloud()
    lidar_right = fastdds_point_cloud.PointCloud()

    try:
        while True:
            # Wait for a message for 2 seconds
            if (lidar_back_sub.wait_for_sample(2)):
                # Read the received message
                if (lidar_back_sub.take_sample(lidar_back)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (lidar_front_sub.wait_for_sample(2)):
                # Read the received message
                if (lidar_front_sub.take_sample(lidar_front)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (lidar_left_sub.wait_for_sample(2)):
                # Read the received message
                if (lidar_left_sub.take_sample(lidar_left)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')
            # Wait for a message for 2 seconds
            if (lidar_right_sub.wait_for_sample(2)):
                # Read the received message
                if (lidar_right_sub.take_sample(lidar_right)):
                    print("success")
                       
                else:
                    print('Bad sample')
            else:
                print('No messages received in the last loop')


    except KeyboardInterrupt:
        print ('Shutdown requested...exiting')
