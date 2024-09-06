/*
Write a program to find the sum of digits of a 5 digit number using recursion.
*/

#include <stdio.h>

int findSum(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("Sum of Digits = %d \n", findSum(n));
  return 0;
}

int findSum(int n) {
  if (n == 0) {
    return 0;
  }
  return (n % 10) + findSum(n / 10);
}