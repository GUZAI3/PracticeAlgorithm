#include <stdio.h>

int main() {
  unsigned int num1 = 1029;  // GCDを求めたいペアのひとつ
  unsigned int num2 = 1071;  // GCDを求めたいペアのひとつ

  // GCD計算
  unsigned int a = num1;
  unsigned int b = num2;
  unsigned int rem = a % b;  // 余り:Reminder
  while (rem) {
    a = b;
    b = rem;
    rem = a % b;
  }

  printf("gcd(%u,%u) = %u\n", num1, num2, b);
  return 0;
}