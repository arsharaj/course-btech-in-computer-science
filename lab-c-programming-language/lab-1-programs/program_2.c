/*
Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary
while the HRA is 15% of the basic salary. Provident Fund is deducted at the rate of 10% of the
gross salary (BS + DA + HRA). Program to calculate the Net Salary.
*/

#include <stdio.h>

int main() {
  float basic_salary;
  printf("Enter basic salary : ");
  scanf("%f", &basic_salary);
  float da = basic_salary * 0.25;
  float hra = basic_salary * 0.15;
  float pf = (basic_salary + da + hra) * 0.10;
  float net_salary = basic_salary + da + hra - pf;
  printf("Net Salary : %f \n", net_salary);
  return 0;
}