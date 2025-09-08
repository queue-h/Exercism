#include "rotational_cipher.h"
#include <string.h>
#include <stdlib.h>

char *rotate(const char *text, int shift_key) {
  if(shift_key == 26) {
    shift_key = 0;
  }
  int length = strlen(text);
  char *output = (char *) malloc(strlen(text) * sizeof(char));

  for(int x = 0; x < length; x++) {
    char letter = text[x];

    // check if letter is lowercase
    if(letter >= 'a' && letter <= 'z') {
      if(letter + shift_key > 'z') {
        output[x] = letter + shift_key - 26;
      } else {
        output[x] = letter + shift_key;
      }
    // check if letter is uppercase
    } else if(letter >= 'A' && letter <= 'Z') {
      if(letter + shift_key > 'Z') {
        output[x] = letter + shift_key - 26;
      } else {
        output[x] = letter + shift_key;
      }
    } else {
    // otherwise, just transcribe directly
    output[x] = text[x];
    }
  }
  return output;
}

