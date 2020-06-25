#include <stdio.h>

int main() {
  unsigned int num1 = 1029;  // Natural number 1
  unsigned int num2 = 1071;  // Natural number 2

  // Calculate GCD
  unsigned int a = num1;
  unsigned int b = num2;
  unsigned int rem = a % b;
  while (rem) {
    a = b;
    b = rem;
    rem = a % b;
  }

  // Print out GCD
  printf("gcd(%u,%u) = %u\n", num1, num2, b);
  return 0;
}
