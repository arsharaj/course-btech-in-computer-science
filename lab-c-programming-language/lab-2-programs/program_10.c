/*
Write a program to find the sum of following series : 1 - (X1 / 1!) + (X2 / 2!) - ...  (Xn / n!)
*/

#include <stdio.h>

int main() {
  int n, fact = 1;
  printf("Enter n : ");
  scanf("%d", &n);
  float arr_x[n + 1], sum = 0;
  arr_x[0] = 1.0;
  for (int i = 1; i <= n; i++) {
    printf("Enter X%d : ", i);
    scanf("%f", &arr_x[i]);
  }
  for (int i = 0; i <= n; i++) {
    float value = arr_x[i] / fact;
    if (i % 2 == 0) {
      sum += value;
    } else {
      sum -= value;
    }
    fact *= i + 1;
  }
  printf("Sum is %f \n", sum);
  return 0;
}