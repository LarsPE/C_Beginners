#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char name[30];  //bytes
  int age;

  printf("\nWhats you name?");
  //scanf("%s", &name);     //does not work if user put in space
  fgets(name, 30, stdin);
  name[strlen(name)-1] = '\0'; // get rid of newline on printout
  printf("\nHow old are you ?: ");
  scanf("%d", &age);

  printf("\nHello %s, how are you?", name);
  printf("\nYou are %d years old\n", age);

  return 0;
}
