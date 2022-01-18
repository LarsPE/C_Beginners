// swithc - alternative to using many else if statements
// Allow a value to be tested for equality against many cases

#include<stdio.h>

int main() {
  char grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A':
      printf("Perfect\n");
      break;
    case 'B':
      printf("You did good\n");
      break;
    case 'C':
      printf("You did okay\n");
      break;
    case 'D':
      printf("At least its not an F\n");
      break;
    case 'F':
      printf("You FAILED\n");
      break;
    default:
      printf("Please enter only valid grades\n");

  }

  return 0;
}
