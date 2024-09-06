/*
Write a program to print the entire prime no between 1 and 300.
*/

#include <stdio.h>

int main() {
  printf("Prime Numbers (1 - 300) : ");
  for (int i = 2; i <= 300; i++) {
    int prime = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        prime = 0;
        break;
      }
    }
    if (prime) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}