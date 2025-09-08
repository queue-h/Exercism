#include "roman_numerals.h"

#include "roman_numerals.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *to_roman_numeral(unsigned int number) {
                // 0   1    2      3      4    5    6      7     8       9
  char* ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
               // 0   10   20    30     40   50     60    70     80      90
  char* tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
                    // 0  100  200   300    400   500   600  700    800     900
  char* hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
                     // 0  1000  2000  3000
  char* thousands[] = {"", "M", "MM", "MMM"};

  char* numerals = (char*)calloc(16, sizeof(char));
  sprintf(numerals, "%s%s%s%s", thousands[number / 1000], hundreds[number / 100 % 10], tens[number / 10 % 10], ones[number % 10]);
  return numerals;
}

