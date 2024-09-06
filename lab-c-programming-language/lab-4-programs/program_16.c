/*
Write a program to print area of rectangle using function & return its value
to main function.
*/

#include <stdio.h>

float findRectangleArea(float length, float breadth); 

int main() {
  float length, breadth;
  printf("Enter length : ");
  scanf("%f", &length);
  printf("Enter breadth : ");
  scanf("%f", &breadth);
  printf("Area of Rectangle : %f \n", findRectangleArea(length, breadth));
  return 0;
}

float findRectangleArea(float length, float breadth) {
  return length * breadth;
}