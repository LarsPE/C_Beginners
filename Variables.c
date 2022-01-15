#include<stdio.h>

int main(int argc, char const *argv[]) {
  int x;        // declaration
  x = 123;      // initialization
  int y = 32;   // dec and init in one

  int age = 55;             // integer
  float temp = 20.5;        // float
  char grade = 'B';         // single character
  char name[] = "Charlie";  // array of characters

  printf("Your age is %d\n", age);
  printf("Temperature is %f\n", temp);
  printf("My grade is %c\n", grade);
  printf("Your name is %s\n", name);

  return 0;
}
