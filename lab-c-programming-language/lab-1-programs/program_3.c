/*
Write a program to determine the roots of quadratic equation.
*/

#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("Enter c : ");
  scanf("%d", &c);
  int discriminant = (b * b) - (4 * a * c);
  if (discriminant < 0) {
    printf("Roots are imaginary and conjugate of each other. \n");
  } else {
    float root_one = ((-1 * b) + sqrt(discriminant)) / (2 * a);
    float root_two = ((-1 * b) - sqrt(discriminant)) / (2 * a);
    printf("Root One : %f  Root Two : %f \n", root_one, root_two);
  }
  return 0;
}