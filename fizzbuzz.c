#include <stdio.h>

int main() {
  int end = 128;  // 出力数

  for (int n = 1; n < end; n++) {
    if (n % 15 == 0) {
      puts("FizzBuzz");
    } else if (n % 3 == 0) {
      puts("Fizz");
    } else if (n % 5 == 0) {
      puts("Buzz");
    } else {
      printf("%d\n", n);
    }
  }

  return 0;
}