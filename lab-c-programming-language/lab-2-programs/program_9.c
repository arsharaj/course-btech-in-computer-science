/*
Write a program to generate sum of series 1! + 2! + 3! + ... + n!
*/

#include <stdio.h>

int main() {
  int n, sum = 0, fact = 1;
  printf("Enter n : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    fact *= i;
    sum += fact;
  }
  printf("Sum = %d \n", sum);
  return 0;
}