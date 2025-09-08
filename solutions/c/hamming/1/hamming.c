#include "hamming.h"
#include "string.h"

int compute(const char *string1, const char *string2) {
    int output = 0;

    if(strlen(string1) != strlen(string2)) {
        return -1;
    }

    for(unsigned long x = 0; x < strlen(string1); x++) {
        char char1[] = "x";
        char char2[] = "x";

        strncpy(char1,string1+x, 1);
        strncpy(char2,string2+x, 1);

        if(strcmp(char1, char2) != 0) {
            output++;
        }
    }
    return output;
}
