/*
Find the sum of series S = 1! + 2! + ... + n!
*/

#include <stdio.h>

int findSum(int n);

int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  printf("S = 1! + 2! + ... + n! \n");
  printf("S = %d \n", findSum(n));
  return 0;
}

int findSum(int n) {
  int sum = 0, fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i; 
    sum += fact;
  }
  return sum;
}