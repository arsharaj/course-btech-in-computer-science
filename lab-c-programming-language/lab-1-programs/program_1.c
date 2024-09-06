/*
Write a program to calculate the area of triangle using Heron's formula:
Area of Triangle = √s(s-a)(s-b)(s-b)
*/

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  printf("Enter a : ");
  scanf("%f", &a);
  printf("Enter b : ");
  scanf("%f", &b);
  printf("Enter c : ");
  scanf("%f", &c);
  float s = (a + b + c) / 2;
  float area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("Area of Triangle = %f \n", area);
  return 0;
}