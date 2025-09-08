#include "difference_of_squares.h"

unsigned int sum_of_squares(int num) {
    int sum = 0;
    for(int x = 1; x <= num; x++) {
        int square = x * x;
        sum += square;
    }
    return sum;
}
unsigned int square_of_sum(int num) {
    int sum = 0;
    for(int x = 1; x <= num; x++) {
        sum += x;
    }
    return sum * sum;
}
unsigned int difference_of_squares(unsigned int num) {
    return square_of_sum(num) - sum_of_squares(num);
}