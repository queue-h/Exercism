#include "perfect_numbers.h"
#include <math.h>
#include <stdio.h>

kind classify_number(int num) {
  if (num <= 0) {
    return ERROR;
  }

  int sum = 0;

    for (int x = 1; x <= num; x++) {

        // if there is no remainder, then the number is a factor.
        if (num % x == 0) {
           if(x != num) {
              sum += x;
          }
        }
    }

    if(sum == num) {
      return PERFECT_NUMBER;
    }
    if(sum > num) {
      return ABUNDANT_NUMBER;
    }
    if(sum < num) {
      return DEFICIENT_NUMBER;
    }
    return ERROR;
}
