#include <iostream>
#include "funcs.h"

int main() {

  std::cout << "Task A: Divisible by (34, 17): " << isDivisibleBy(34, 17) << "\n";
  std::cout << "Task B: Is Prime (2): " << isPrime(2) << "\n";
  std::cout << "Task C: Next Prime (3): " << nextPrime(3) << "\n";
  std::cout << "Task D: Count Primes in range (2, 47): " << countPrimes(2, 47) << "\n";
  std::cout << "Task E: Is Twin Prime (5): " << isTwinPrime(5) << "\n";
  std::cout << "Task F: Next Twin Prime (7): " << nextTwinPrime(7) << "\n";
  std::cout << "Task G: Largest Twin Prime in Range (5, 18): " << largestTwinPrime(3, 11) << "\n";

  return 0;
}