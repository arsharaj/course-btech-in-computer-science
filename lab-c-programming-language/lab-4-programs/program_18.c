/*
Write a program to find sum of Fibonacci series using function.
*/

#include <stdio.h>

int findFibonacciSum(int n);
int findFibonacciNumber(int n);

int main() {
  int n;
  printf("Enter n (1 - n) : ");
  scanf("%d", &n);
  printf("Sum of Fibonacci Series is : %d \n", findFibonacciSum(n));
  return 0;
}

int findFibonacciSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += findFibonacciNumber(i);
  }
  return sum;
}

int findFibonacciNumber(int n) {
  if (n == 1) {
    return 0;
  }
  if (n == 2) {
    return 1;
  }
  return findFibonacciNumber(n - 1) + findFibonacciNumber(n - 2);
}