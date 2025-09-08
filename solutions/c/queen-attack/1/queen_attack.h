#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdint.h>

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION} attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

int queen_1_is_off_board(position_t queen_1);
int queen_2_is_off_board(position_t queen_2);

int is_same_pos (position_t queen_1, position_t queen_2);
int is_on_same_row(position_t queen_1, position_t queen_2);
int is_on_same_col(position_t queen_1, position_t queen_2);

int can_attack_up_to_the_right(position_t queen_1, position_t queen_2);
int can_attack_up_to_the_left(position_t queen_1, position_t queen_2);
int can_attack_down_to_the_right(position_t queen_1, position_t queen_2);
int can_attack_down_to_the_left(position_t queen_1, position_t queen_2);

attack_status_t can_attack(position_t queen_1, position_t queen_2);

#endif
