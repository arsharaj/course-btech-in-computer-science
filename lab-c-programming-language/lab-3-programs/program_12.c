/*
Write a program to print out all the Armstrong number between 100 and 500.
*/

#include <stdio.h>
#include <math.h>

int checkArmstrong(int num);

int main() {
  printf("Armstrong Number (100 - 500) : ");
  for (int i = 100; i <= 500; i++) {
    if (checkArmstrong(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

int checkArmstrong(int num) {
  int temp = num, sum = 0;
  while (temp > 0) {
    sum += pow((temp % 10), 3);
    temp /= 10;
  }
  if (num == sum) {
    return 1;
  } else {
    return 0;
  }
}