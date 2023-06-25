#include <stdio.h>

int main(void) {
  int grade = 0;

  printf("Please enter your grade: ");
  scanf("%d", &grade);

  char level = 0;
  if (grade >= 90) {
    level = 'A';
  } else if (grade >= 80) {
    level = 'B';
  } else if (grade >= 70) {
    level = 'C';
  } else if (grade >= 60) {
    level = 'D';
  } else {
    level = 'E';
  }

  printf("Your level is: %c\n", level);

  return 0;
}

/*
  x < 0 -> -1
  x = 0 -> 0
  x > 0 -> 2x
*/
