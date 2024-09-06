/*
Write a program to delete duplicate element in a list of 10 elements and display it on screen.
*/

#include <stdio.h>

void printWithoutDuplicates(int arr[]);

int main() {
  int arr[10];
  for (int i = 0; i < 10; i++) {
    printf("Enter arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  printWithoutDuplicates(arr);
  return 0;
}

void printWithoutDuplicates(int arr[]) {
  printf("Array without duplicates : ");
  for (int i = 0; i < 10; i++) {
    int status = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (arr[i] == arr[j]) {
        status = 1;
        break;
      }
    }
    if (!status) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}