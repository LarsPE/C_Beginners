#include<stdio.h>

int main(int argc, char const *argv[]) {
  // augmented assignement operators =  used to replace a statement
  //                                    where an operator takes
  //                                    a variable as one of its arguments
  //                                    and then assigns the result
  //                                    back to the same variable
  //                                    x = x + 1
  //                                    x += 1

  int x = 20;
  x += 1;
  printf("%d\n", x);

  return 0;
}
