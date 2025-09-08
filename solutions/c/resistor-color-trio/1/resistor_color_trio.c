#include <math.h>
#include "resistor_color_trio.h"
resistor_value_t color_code(resistor_band_t colors[])
{
  resistor_value_t resistor;
  uint64_t value = 0;

  value = (10 * colors[0] + colors[1]) * pow(10, colors[2]);

  if (value >= GIGAOHMS) {
    resistor.unit = GIGAOHMS;
  } else if (value >= MEGAOHMS) {
    resistor.unit = MEGAOHMS;
  } else if (value >= KILOOHMS) {
    resistor.unit = KILOOHMS;
  } else {
    resistor.unit = OHMS;
  }

  resistor.value = value / resistor.unit;
  return resistor;
}
