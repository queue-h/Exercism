#include "allergies.h"
#include <stdbool.h>

bool is_allergic_to(const allergen_t item, const int score) {
  // check if score is greater than or equal to allergen
  return ((1 << item) & score) > 0;
}

allergen_list_t get_allergens(const int score) {
  allergen_list_t list;
  list.count = 0;
  // go through all the allergens
  for (allergen_t item = ALLERGEN_EGGS; item < ALLERGEN_COUNT; item++) {
    // mark allergen as true or false
    list.allergens[item] = is_allergic_to(item, score);
    if (list.allergens[item]) {
      // increment count if true
      list.count++;
    }
  }
  return list;
}
