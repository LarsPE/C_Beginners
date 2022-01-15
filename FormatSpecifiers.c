#include<stdio.h>

int main(int argc, char const *argv[]) {
  // format specifiers % = defines and formats type of data to be displayed

  // %c = character
  // %s = string (array of characters)
  // %f = float
  // %lf= double
  // %d = integer

  // %.1 = decimal precision
  // %1 = minimum field width
  // %- = left align

  float item1 = 5.76;
  float item2 = 20.00;
  float item3 = 100.99;

  printf("item1: %8.1f\n", item1);
  printf("item2: %8.1f\n", item2);
  printf("item3: %8.1f\n", item3);
  return 0;
}
