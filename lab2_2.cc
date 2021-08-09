#include <stdio.h>

int main() {
  int a, b, x, y, t;

  printf("Enter first number :");
  scanf("%d", &x);
  printf("Enter second number :");
  scanf("%d", &y);
  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  printf("Greatest common diviser : %d", a);
  return 0;
}