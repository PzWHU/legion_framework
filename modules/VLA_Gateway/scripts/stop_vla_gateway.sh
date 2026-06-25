#!/usr/bin/env bash
pkill -f "vla_gateway ./bin/conf/vla_gateway.json" 2>/dev/null || true
pkill -f "./bin/vla_gateway ./bin/conf/vla_gateway.json" 2>/dev/null || true
echo "VLA_Gateway stopped."
