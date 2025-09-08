#include "reverse_string.h"
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value) {
  int length = strlen(value);
  char *output = (char*)malloc(length * sizeof(char));

  for(int forwards = 0, backwards = length - 1; forwards < length; forwards++, backwards--) {
    output[forwards] = value[backwards];
  }
  return output;
}
