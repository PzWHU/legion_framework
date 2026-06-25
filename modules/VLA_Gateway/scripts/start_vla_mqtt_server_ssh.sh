#!/usr/bin/env bash
# Start the remote VLA MQTT inference server on 8.148.30.204 in the background.
set -e

REMOTE_USER="lenovo"
REMOTE_IP="8.148.30.204"
REMOTE_PASS="admini123@"
REMOTE_DIR="/mnt/data/project/zp/DIRLPlanning"

echo "Starting remote VLA MQTT inference server on ${REMOTE_IP}..."

# Use </dev/null so the SSH session can close cleanly while python keeps running.
sshpass -p "${REMOTE_PASS}" ssh -o StrictHostKeyChecking=no "${REMOTE_USER}@${REMOTE_IP}" \
  "source /home/lenovo/anaconda3/etc/profile.d/conda.sh && \
   conda activate vla2 && \
   cd ${REMOTE_DIR} && \
   pkill -f '[v]la_mqtt_server.py' 2>/dev/null || true && \
   sleep 1 && \
   nohup python vla_mqtt_server.py --broker 127.0.0.1 --port 1883 > /tmp/vla_server.log 2>&1 </dev/null & \
   echo started_pid_\$!"

echo "Remote server started. Log: ${REMOTE_IP}:/tmp/vla_server.log"
echo "Wait ~20-30 seconds for vLLM engine to warm up before testing."
