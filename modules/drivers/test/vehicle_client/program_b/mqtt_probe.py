import paho.mqtt.client as mqtt
import json
import time

# 配置
BROKER = "zhdl.asia"
PORT = 1883
USER = "lx"
PW = "zhdltest"
TOPIC = "/cloud2vehicle/V10000005/cmd"

def on_connect(client, userdata, flags, rc):
    print(f"Connected with result code {rc}")
    client.subscribe(TOPIC)
    print(f"Subscribed to {TOPIC}")

def on_message(client, userdata, msg):
    print(f"\n--- RECEIVED MESSAGE ---")
    print(f"Topic: {msg.topic}")
    print(f"Payload: {msg.payload.decode()}")

client = mqtt.Client("probe_debug_tool")
client.username_pw_set(USER, PW)
client.on_connect = on_connect
client.on_message = on_message

print(f"Connecting to {BROKER}...")
client.connect(BROKER, PORT, 60)
client.loop_forever()
