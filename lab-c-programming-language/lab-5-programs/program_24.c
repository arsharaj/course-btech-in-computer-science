/*
Write a program to convert binary number in to decimal number.
*/

#include <stdio.h>
#include <math.h>

int findDecimal(int binary);

int main() {
  int binary;
  printf("Binary = ");
  scanf("%d", &binary);
  printf("Decimal = %d \n", findDecimal(binary));
  return 0;
}

int findDecimal(int binary) {
  int decimal = 0, i = 0;
  while (binary > 0) {
    decimal += (binary % 10) * pow(2, i);
    binary /= 10;
    i++;
  }
  return decimal;
}