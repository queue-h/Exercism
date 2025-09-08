#include "high_scores.h"

// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len) {
  return scores[scores_len - 1];
}

// returns index of value in scores
int find_index(const int32_t *scores, size_t scores_len, int value) {
  for(unsigned long x = 0; x < scores_len; x++) {
    if(scores[x] == value) {
      return x;
    }
  }
  return -1;
}

// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int max = -1;
  for (unsigned long x = 0; x < scores_len; x++) {
    if(scores[x] > max) {
      max = scores[x];
    }
  }
  return max;
}

// Write the highest scores to `output` (in non-ascending order).
// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
  int output_len = scores_len;

  if(scores_len > 3) {
    output_len = 3;
  }

  // create array, identical to scores, that i can manipulate
  int scores_dup[scores_len];
  for (unsigned long x = 0; x < scores_len; x++) {
    scores_dup[x] = scores[x];
  }

  for(int x = 0; x < output_len; x++) {
    int max = personal_best(scores_dup, scores_len);
    output[x] = max;
    int index = find_index(scores_dup, scores_len, max);
    scores_dup[index] = 0;
  }
  return output_len;
}
