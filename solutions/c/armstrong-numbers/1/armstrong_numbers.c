#include "armstrong_numbers.h"
#include <stdbool.h>
#include <math.h>

bool is_armstrong_number(int candidate) {
    int number = candidate;
    
    int length = (int)floor(log10((float)number)) + 1;
    int arr[length];
    for(int x = 0; number != 0; x++) {
        arr[x] = number % 10;
        number /= 10;
    } 

    int output = 0;
    for(int x = 0; x < length; x++) {
        output += pow(arr[x], length);
    }

    return (output == candidate);
}
