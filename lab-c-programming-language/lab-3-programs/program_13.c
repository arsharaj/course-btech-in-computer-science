/*
Write a program to draw the following figure :
3 2 1
2 1
1

  *
 * *
* * *
*/

#include <stdio.h>

void drawNumber();
void drawStar();

int main() {
  drawNumber();
  printf("\n");
  drawStar();
  return 0;
}

void drawNumber() {
  for (int i = 3; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
      printf("%d ", j);
    }
    printf("\n");
  }
}

void drawStar() {
  for (int i = 1; i <= 3; i++) {
    for (int j = 3; j >= 1; j--) {
      if (i < j) {
        printf(" ");
      } else {
        printf("* ");
      }
    }
    printf("\n");
  }
}