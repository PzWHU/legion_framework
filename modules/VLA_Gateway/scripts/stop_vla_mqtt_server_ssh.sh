#!/usr/bin/env bash
# Stop the remote VLA MQTT inference server on 8.148.30.204.
set -e

REMOTE_USER="lenovo"
REMOTE_IP="8.148.30.204"
REMOTE_PASS="admini123@"

echo "Stopping remote VLA MQTT inference server on ${REMOTE_IP}..."

sshpass -p "${REMOTE_PASS}" ssh -o StrictHostKeyChecking=no "${REMOTE_USER}@${REMOTE_IP}" \
  "pkill -9 -f '[v]la_mqtt_server.py' 2>/dev/null || true; \
   pkill -9 -f 'bash -c.*vla_mqtt_server' 2>/dev/null || true; \
   sleep 1; \
   ps -ef | grep '[v]la_mqtt_server' | grep -v grep || echo 'no vla_mqtt_server process'"

echo "Remote server stopped."
