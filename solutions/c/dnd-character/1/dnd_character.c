#include "dnd_character.h"
#include <stdlib.h>
#include <math.h>

dnd_character_t make_dnd_character() {
    dnd_character_t character; 
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();

    character.hitpoints = 10 + modifier(character.constitution);
    
    return character;
}

int ability() {
    int sum = 0;
    int min_index = 0;
    
    int upper_bound = 6; 
    int lower_bound = 1; 

    int rolls[4];

    // roll four die
    for (int i = 0; i < 4; i++) { 
        int roll = rand() % (upper_bound - lower_bound + 1) + lower_bound; 
        rolls[i] = roll;
    } 

    // find min index
    for (int i = 0; i < 4; ++i) {
        if (rolls[i] < rolls[min_index]) {
            min_index = i;
        }
    }

    // sum other three rolls
    for (int i = 0; i < 4; ++i) {
        if(i != min_index) {
            sum += rolls[i];
        }
    }
    return sum;
}

int modifier(int score) {
    return floor((score - 10) / 2.0);
}