#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "luhn.h"

bool luhn(const char *num) {
  // calculate length
  int num_length = strlen(num);
  int sum = 0;
  int digit_count = 0;

  // go through array
  for(int x = num_length - 1; x >= 0; x--) {
    // make sure num[x] is digit
    if(num[x] == ' ') {
      continue;
    }
    if(num[x] < '0' || '9' < num[x]) {
      return false;
    }
    // convert digit string to int
    int digit = num[x] - '0';
    // increment actual count of length
    digit_count++;
    // double every other digit
    if(digit_count % 2 == 0) {
      digit *= 2;
      if(digit > 9) {
        digit -= 9;
      }
    }
    // add digit to sum
    sum += digit;
  }
  return digit_count > 1 && sum % 10 == 0;
}
