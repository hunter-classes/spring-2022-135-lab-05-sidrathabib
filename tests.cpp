#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Task A: Is Divisible: ") { 
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(16, 8) == true); 
    CHECK(isDivisibleBy(10,5) == true);
    CHECK(isDivisibleBy(8, 0) == false);
}

TEST_CASE("Task B: Is a Prime?: ") { 
    CHECK(isPrime(5) == false); 
    CHECK(isPrime(9) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(21) == false); 
    CHECK(isPrime(5) == true); 
}

TEST_CASE("Task C: Next Prime: ") { 
    CHECK(nextPrime(2) == 3); 
    CHECK(nextPrime(3) == 5); 
    CHECK(nextPrime(5) == 7); 
    CHECK(nextPrime(7) == 11); 
    CHECK(nextPrime(11) == 13); 
}

TEST_CASE("Task D: Count primes in range: ") { 
    CHECK(countPrimes(-1, 2) == 1);
    CHECK(countPrimes(0, 0) == 0);
    CHECK(countPrimes(0, 10) == 4);
    CHECK(countPrimes(10, 0) == 0);
    CHECK(countPrimes(1, 50) == 15); 
}

TEST_CASE("Task E: Is a Twin Prime?: ") { 
    CHECK(isTwinPrime(3) == true); 
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(-1) == false); 
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(11) == true);
}

TEST_CASE("Task F: Next Twin Prime: ") { 
    CHECK(nextTwinPrime(-1) == 3); 
    CHECK(nextTwinPrime(0) == 3); 
    CHECK(nextTwinPrime(5) == 7); 
    CHECK(nextTwinPrime(11) == 13);
    CHECK(nextTwinPrime(19) == 29);
}

TEST_CASE("Task G: Largest Twin Prime in Range: ") { 
    CHECK(largestTwinPrime(-29, 29) == 19);
    CHECK(largestTwinPrime(1, 101) == 101);
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}