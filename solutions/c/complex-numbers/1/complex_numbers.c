#include "complex_numbers.h"
#include <math.h>

static complex_t y = {0};

complex_t c_add(complex_t a, complex_t b)
{
   y.real = a.real + b.real;
   y.imag = a.imag + b.imag;
   return y;
}

complex_t c_sub(complex_t a, complex_t b)
{
   y.real = a.real - b.real;
   y.imag = a.imag - b.imag;
   return y;
}

complex_t c_mul(complex_t a, complex_t b) {
   y.real = a.real * b.real - a.imag * b.imag;
   y.imag = a.imag * b.real + a.real * b.imag;
   return y;
}

complex_t c_div(complex_t a, complex_t b) {
   y.real = (a.real * b.real + a.imag * b.imag) / (pow(b.real, 2) + pow(b.imag, 2));
   y.imag = (a.imag * b.real - a.real * b.imag) / (pow(b.real, 2) + pow(b.imag, 2));
   return y;
}

double c_abs(complex_t x)
{
   return sqrt(pow(x.real, 2) + pow(x.imag, 2));
}

complex_t c_conjugate(complex_t x) {
  y.real = x.real;
   y.imag = 0 - x.imag;
   return y;
}

double c_real(complex_t x) {
   return x.real;
}

double c_imag(complex_t x)
{
   return x.imag;
}

complex_t c_exp(complex_t x) {
   //e^a * (cos(b) + i * sin(b))
   y.real = exp(x.real) * cos(x.imag);
   y.imag = exp(x.real) * sin(x.imag);
   return y;
}
