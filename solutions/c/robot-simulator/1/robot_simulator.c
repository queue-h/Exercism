#include "robot_simulator.h"

void advance(robot_status_t *robot) {
  switch (robot->direction) {
    case DIRECTION_NORTH:
      robot->position.y++;
      break;
    case DIRECTION_EAST:
      robot->position.x++;
      break;
    case DIRECTION_SOUTH:
      robot->position.y--;
      break;
    case DIRECTION_WEST:
      robot->position.x--;
      break;
    case DIRECTION_MAX:
      break;
  }
}

robot_status_t robot_create(robot_direction_t d, int x, int y) {
  robot_status_t status;
  status.direction = d;
  status.position.x = x;
  status.position.y = y;

  return status;
}

void robot_move(robot_status_t *robot, const char *commands) {
  for(int x = 0; commands[x] != '\0'; x++) {
    switch(commands[x]) {
      case 'R':
        robot->direction = (robot->direction + 1) % DIRECTION_MAX;
        break;
      case 'L':
        robot->direction = (robot->direction - 1) % DIRECTION_MAX;
        break;
      case 'A':
        advance(robot);
        break;
    }
  }
}
