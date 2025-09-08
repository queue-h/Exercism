#include "binary_search.h"
#include <string.h>
#include <stddef.h>

const int *binary_search(int value, const int *arr, size_t length) {
  int upper = length;
  int lower = 0;

  while (upper > lower) {
    int mid = (upper + lower) / 2;

    // value in first half of array
    if (value < arr[mid]) {
      upper = mid;
    }
    // value in second half of array
    else if (value > arr[mid]) {
      lower = mid + 1;
    } else {
      return &arr[mid];
    }
  }
  return NULL;
}
