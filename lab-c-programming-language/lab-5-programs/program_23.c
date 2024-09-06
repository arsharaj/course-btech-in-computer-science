/*
Write a program to convert decimal number in to binary number.
*/

#include <stdio.h>

int findBinary(int decimal);

int main() {
  int decimal;
  printf("Decimal = ");
  scanf("%d", &decimal);
  printf("Binary = %d \n", findBinary(decimal));
  return 0;
}

int findBinary(int decimal) {
  if (decimal == 0) {
    return 0;
  }
  if (decimal == 1) {
    return 1;
  }
  return findBinary(decimal / 2) * 10 + (decimal % 2);
}