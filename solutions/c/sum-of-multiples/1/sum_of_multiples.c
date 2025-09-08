#include "sum_of_multiples.h"

unsigned int sum(const unsigned int *factors, const size_t number_of_factors, const unsigned int limit) {
  unsigned int sum = 0;

  // go through potential multiples one at a time
  for(unsigned int num = 1; num < limit; num++) {
    // extricate one factor at a time
    for(unsigned long f = 0; f < number_of_factors; f++) {
      int factor = factors[f];
      // ignore zeros
      if(factor == 0) {
        continue;
      }
      // check if divisible
      if(num % factor == 0) {
        sum += num;
        break;
      }
    }
  }
  return sum;
}
