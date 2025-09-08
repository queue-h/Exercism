#include "queen_attack.h"
#include <stdbool.h>

int queen_1_is_off_board(position_t queen_1) {
    if(queen_1.row > 7 || queen_1.column > 7) {
        return true;
    }
    return false;
}

int queen_2_is_off_board(position_t queen_2) {
    if(queen_2.row > 7 || queen_2.column > 7) {
        return true;
    }
    return false;
}

int is_same_pos (position_t queen_1, position_t queen_2) {
    if(queen_1.row == queen_2.row) {
        if (queen_1.column == queen_2.column) {
            return true;
        }
    }
    return false;
}

int is_on_same_row(position_t queen_1, position_t queen_2) {
    if(queen_1.row == queen_2.row) {
        return true;
    }
    return false;
}

int is_on_same_col(position_t queen_1, position_t queen_2) {
    if(queen_1.column == queen_2.column) {
        return true;
    }
    return false;
}

int can_attack_up_to_the_right(position_t queen_1, position_t queen_2) {
    position_t temp_queen_1 = queen_1;
    while(!queen_1_is_off_board(temp_queen_1)) {
        temp_queen_1.row++;
        temp_queen_1.column++;
        if(is_same_pos(temp_queen_1, queen_2)) {
            return true;
        }
    }
    return false;
}

int can_attack_up_to_the_left(position_t queen_1, position_t queen_2) {
    position_t temp_queen_1 = queen_1;
    while(!queen_1_is_off_board(temp_queen_1)) {
        temp_queen_1.row--;
        temp_queen_1.column++;
        if(is_same_pos(temp_queen_1, queen_2)) {
            return true;
        }
    }
    return false;
}

int can_attack_down_to_the_right(position_t queen_1, position_t queen_2) {
    position_t temp_queen_1 = queen_1;
    while(!queen_1_is_off_board(temp_queen_1)) {
        temp_queen_1.row++;
        temp_queen_1.column--;
        if(is_same_pos(temp_queen_1, queen_2)) {
            return true;
        }
    }
    return false;
}

int can_attack_down_to_the_left(position_t queen_1, position_t queen_2) {
    position_t temp_queen_1 = queen_1;
    while (!queen_1_is_off_board(temp_queen_1)) {
        temp_queen_1.row--;
        temp_queen_1.column--;
        if (is_same_pos(temp_queen_1, queen_2)) {
            return true;
        }
    }
    return false;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  if(queen_1_is_off_board(queen_1)) {
      return INVALID_POSITION;
  }
  if(queen_2_is_off_board(queen_2)) {
      return INVALID_POSITION;
  }
  if(is_same_pos(queen_1, queen_2)) {
      return INVALID_POSITION;
  }

  if(is_on_same_row(queen_1, queen_2)) {
      return CAN_ATTACK;
  }
  if(is_on_same_col(queen_1, queen_2)) {
      return CAN_ATTACK;
  }

  if(can_attack_up_to_the_right(queen_1, queen_2)) {
      return CAN_ATTACK;
  }
  if(can_attack_down_to_the_right(queen_1, queen_2)) {
      return CAN_ATTACK;
  }
  if(can_attack_up_to_the_left(queen_1, queen_2)) {
      return CAN_ATTACK;
  }
  if(can_attack_down_to_the_left(queen_1, queen_2)) {
      return CAN_ATTACK;
  }
  return CAN_NOT_ATTACK;
}

