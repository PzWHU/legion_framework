#!/usr/bin/env python3
"""Simple MQTT client to test the remote VLA inference pipeline.

Usage:
    # with project venv
    source .venv_mqtt/bin/activate
    python test_mqtt_client.py

    # or override broker / prompt file
    python test_mqtt_client.py 192.168.0.2 1883 sample_prompt.txt
"""
import os
import sys
import time

import paho.mqtt.client as mqtt

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
DEFAULT_BROKER = "192.168.0.2"
DEFAULT_PORT = 1883
DEFAULT_PROMPT = os.path.join(SCRIPT_DIR, "sample_prompt.txt")

BROKER = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_BROKER
PORT = int(sys.argv[2]) if len(sys.argv) > 2 else DEFAULT_PORT
PROMPT_FILE = sys.argv[3] if len(sys.argv) > 3 else DEFAULT_PROMPT

with open(PROMPT_FILE, "r", encoding="utf-8") as f:
    prompt = f.read()

result = None
received = False


def on_connect(client, userdata, flags, rc):
    print(f"Connected with result code {rc}")
    client.subscribe("vla/gateway/result")
    client.publish("vla/gateway/frame_data", prompt)
    print("Published prompt, waiting for result...")


def on_message(client, userdata, msg):
    global result, received
    result = msg.payload.decode("utf-8", errors="replace")
    print(f"Received result: {result}")
    received = True
    client.disconnect()


client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect(BROKER, PORT, 60)
client.loop_forever()

if not received:
    print("No result received")
    sys.exit(1)
