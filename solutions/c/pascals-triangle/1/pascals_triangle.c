#include "pascals_triangle.h"
#include <stdlib.h>

void free_triangle(uint8_t **triangle, size_t rows) {
    for(size_t x = 0; x < rows; x++) {
      free(triangle[x]);
    }

    free(triangle);
}

uint8_t **create_triangle(size_t num_rows) {
    uint8_t **triangle = (uint8_t **) malloc(num_rows * sizeof(uint8_t *));

    if (num_rows == 0) {
      triangle[0] = calloc(1, sizeof(triangle[0]));
          if(!triangle[0]) {
            free_triangle(triangle, 1);
            return NULL;
          }
      return triangle;
    }

    int columns = 1;
    for (size_t r = 0; r < num_rows; r++) {

        uint8_t *row = malloc((columns) * sizeof(uint8_t *));

        for(int c = 0; c < columns; c++) {
          if(c == 0 || c == columns - 1) {
            row[c] = 1;
          } else {
              row[c] = triangle[r - 1][c - 1] + triangle[r - 1][c];
          }
        }

        triangle[r] = row;

        columns++;
    }

    return triangle;
}
