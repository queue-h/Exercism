#include "raindrops.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* convert(char result[], int drops) {
    int pling = drops % 3;
    int plang = drops % 5;
    int plong = drops % 7;
    if(pling == 0) {
        strcat(result, "Pling");
    }
    if(plang == 0) {
        strcat(result, "Plang");
    }
    if(plong == 0) {
        strcat(result, "Plong");
    }
    if(strlen(result) == 0) {
        sprintf(result, "%d", drops);
    }
    return result;
}
