#include "eliuds_eggs.h"
#include "stdlib.h"


int* decToBinary(int eggs) {
    int* binaryNum1 = malloc(sizeof(int) * 8);
    for (unsigned long x = 0; x < (sizeof(int) * 8); x++) {
        binaryNum1[x] = eggs % 2;
        eggs /= 2;
    }
    return binaryNum1;
}

int countBinaryBits(int* binaryNum2) {
    int eggCount = 0;
    for (unsigned long x = 0; x < (sizeof(int) * 8); x++) {
        switch (binaryNum2[x])
        {
            case 0:
                break;
            case 1:
                eggCount += 1;
            break;
        }
    }
    return eggCount;
}

int egg_count(int eggs) {
    int* binaryNum3 = decToBinary(eggs);
    int output = countBinaryBits(binaryNum3);
    free(binaryNum3);
    binaryNum3 = NULL;
    return output;
}
