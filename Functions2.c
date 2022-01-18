#include<stdio.h>

void birthday(char x[], int y){
  printf("\nHappy birthday dear %s!", x);
  printf("\nYou are %d years old!\n", y);
}

int main() {
  char name[] = "Charlie";
  int age = 45;

  birthday(name, age);

  return 0;
}
