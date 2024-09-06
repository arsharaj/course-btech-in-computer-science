/*
Write a program to receive marks of physics, chemistry & maths from user and check
its eligibility for course if :
a) Marks of physics > 40
b) Marks of chemistry > 50
c) Marks of math's > 60
d) Total of physics & math's marks > 150
OR
e) Total of three subjects marks > 200
*/

#include <stdio.h>

int main() {
  int physics, chemistry, maths;
  printf("Enter physics marks : ");
  scanf("%d", &physics);
  printf("Enter chemistry marks : ");
  scanf("%d", &chemistry);
  printf("Enter maths marks : ");
  scanf("%d", &maths);
  if ((physics + chemistry + maths > 200) || 
      (physics > 40 && chemistry > 50 && maths > 60 && physics + maths > 150)) {
    printf("Eligible for the course. \n");
  } else {
    printf("Not Eligible for the course. \n");
  }
  return 0;
}