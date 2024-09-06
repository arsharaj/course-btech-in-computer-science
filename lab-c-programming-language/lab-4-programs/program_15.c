/*
Write a function that return sum of all the odd digits of a given positive no
entered through keyboard.
*/

#include <stdio.h>

int findOddDigitsSum(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("Sum = %d \n", findOddDigitsSum(n));
  return 0;
}

int findOddDigitsSum(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    if (digit % 2 != 0) {
      sum += digit;
    }
    n /= 10;
  }
  return sum;
}