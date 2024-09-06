/*
Write a program to receive a five digit no and display as like 24689 :
2
4
6
8
9
*/

#include <stdio.h>

int main() {
  int arr[5];
  for (int i = 0; i < 5; i++) {
    printf("Enter value %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Value = ");
  for(int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}