/*
Write a program to find the largest of three numbers using nested if else.
*/

#include <stdio.h>

int main() {
  int a, b, c, largest;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("Enter c : ");
  scanf("%d", &c);
  if (a > b) {
    if (a > c) {
      largest = a;
    } else {
      largest = c;
    }
  } else {
    if (b > c) {
      largest = b;
    } else {
      largest = c;
    }
  }
  printf("%d is the largest. \n", largest);
  return 0;
}