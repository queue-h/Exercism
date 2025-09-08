#include "binary.h"

#include "string.h"

int convert(const char *input) {
    int power = 1;
    int output = 0;

    for(int x = strlen(input) - 1; x >= 0; x--) {
        int curr = input[x] - 48;
        if(!(curr == 1 || curr == 0)) {
            return -1;
        }
        output += (curr * power);
        power *= 2;
    }
    return output;
}
