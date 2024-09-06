/*
Write a program to construct a Fibonacci series upto n terms.
*/

#include <stdio.h>

int main() {
  int n, prev_prev = 0, prev = 1;
  printf("Enter n : ");
  scanf("%d", &n);
  printf("Fibonacci Series : ");
  if (n >= 1) {
    printf("0 ");
  }
  if (n >= 2) {
    printf("1 ");
  } 
  if (n >= 3) {
    for (int i = 3; i <= n; i++) {
      int sum = prev_prev + prev;
      printf("%d ", sum);
      prev_prev = prev;
      prev = sum;
    }
  }
  printf("\n");
  return 0;
}