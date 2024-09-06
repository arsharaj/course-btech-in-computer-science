/*
Write a program to calculate the GCD of given numbers using recursion.
*/

#include <stdio.h>

int findGCD(int a, int b);

int main() {
  int a, b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("GCD (Greatest Common Divisor) : %d \n", findGCD(a, b));
  return 0;
}

int findGCD(int a, int b) {
  if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  } else if (a > b) {
    return findGCD(a - b, b);
  } else if (a < b) {
    return findGCD(a, b - a);
  } else {
    return a;
  }
}