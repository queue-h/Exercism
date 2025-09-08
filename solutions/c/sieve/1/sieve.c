#include "sieve.h"
#include <stdbool.h>
#include <string.h>

/// Calculate at most `max_primes` prime numbers in the interval [2,limit]
/// using the Sieve of Eratosthenes and store the prime numbers in `primes`
/// in increasing order.
/// The function returns the number of calculated primes.
uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes) {

  // must use limit + 1 because array index starts at zero

  bool is_prime[limit + 1];
  size_t prime_count = 0;
  // set is_prime to true
  memset(is_prime, true, limit + 1);

  for(uint32_t p = 2; p < limit + 1 && prime_count < max_primes; p++) {
    // check if current number is prime, if not, skip
    if(is_prime[p]) {
      // check multiples
      for(uint32_t m = p + p; m < limit + 1; m += p) {
        is_prime[m] = false;
      }
      // add prime to primes
      *(primes + prime_count) = p;
      // increment number of primes
      prime_count++;
    }
  }
  return prime_count;
}
