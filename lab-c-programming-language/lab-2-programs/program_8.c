/*
Write a program to find whether the number is Armstrong number.
*/

#include <stdio.h>
#include <math.h>

int main() {
  int num, temp, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &num);
  temp = num;
  while (temp > 0) {
    sum += pow((temp % 10), 3);
    temp /= 10;
  }
  if (num == sum) {
    printf("%d is an armstrong number. \n", num);
  } else {
    printf("%d is not an armstrong number. \n", num);
  }
  return 0;
}