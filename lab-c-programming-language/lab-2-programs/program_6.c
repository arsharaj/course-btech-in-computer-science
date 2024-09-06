/*
Write a program to find the value of y for a particular value of n. The a, x, b, n is
input by user.
if n = 1    y = ax % b
if n = 2    y = (ax)^2 + (b)^2
if n = 3    y = a - bx
if n = 4    y = a + x / b
*/

#include <stdio.h>

int main() {
  int n, x, a, b;
  printf("Enter n (1 - 4) : ");
  scanf("%d", &n);
  printf("Enter x : ");
  scanf("%d", &x);
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  if (n == 1) {
    printf("y = ax %c b \n", '%');
    printf("y = %d \n", a * x % b);
  } else if (n == 2) {
    printf("y = (ax)^2 + (b)^2 \n");
    printf("y = %d \n", a * x + a * x + b * b);
  } else if (n == 3) {
    printf("y = a - bx \n");
    printf("y = %d \n", a - b * x);
  } else if (n == 4) {
    printf("y = a + x / b \n");
    printf("y = %d \n", a + x / b);
  } else {
    printf("Enter a valid number. \n");
  }
  return 0;
}