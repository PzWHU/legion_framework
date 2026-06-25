#!/usr/bin/env bash
REMOTE_USER="lenovo"
REMOTE_IP="8.148.30.204"
REMOTE_PASS="admini123@"

echo "=== Remote VLA MQTT inference server status ==="
sshpass -p "${REMOTE_PASS}" ssh -o StrictHostKeyChecking=no "${REMOTE_USER}@${REMOTE_IP}" \
  'echo "--- process ---"; ps -ef | grep "vla_mqtt_server.py" | grep -v grep || echo "not running"; \
   echo "--- GPU memory ---"; nvidia-smi --query-gpu=name,memory.used,memory.total --format=csv,noheader; \
   echo "--- last log ---"; tail -10 /tmp/vla_server.log'
