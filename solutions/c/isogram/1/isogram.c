#include "isogram.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_isogram(const char phrase[]) {

    // empty phrase
    if(phrase == NULL) {
        return false;
    }
    int len = strlen(phrase);
    for(int first = 0; first < len; first++) {
        for(int second = first + 1; second < len; second++) {
            if(isalpha(phrase[first])) {
                if(tolower(phrase[first]) == tolower(phrase[second])) {
                    return false;
                }
            }
        }
    }
    return true;
}