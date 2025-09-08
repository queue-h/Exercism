#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index) {
    if(index > 64) {
        return 0;
    }
    return pow(2, index - 1);
}

uint64_t total(void) {
    int total = 0;
    for(int x = 1; x <= 64; x++) {
        total += square(x);
    }
    return total;
}
