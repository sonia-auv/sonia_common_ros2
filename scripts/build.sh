#!/usr/bin/env bash

# Usage: ./scripts/build.sh [DOCKER_CI_DIR]

set -e
set -o pipefail

DOCKER_CI_DIR=$1

cd sonia_common_ros2

colcon build --cmake-force-configure --install INSTALL_BASE
