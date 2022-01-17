// Linear search in C
#include<stdio.h>

int target = 3;
const int SIZE = 7;
int myArray[7] = {6,5,1,9,8,7,3};

void LinearSearch(){
  int i = 0;
  printf("\nSearch for the target\n");
  for (i=0;i<SIZE;i++){
    if (myArray[i] == target){
      printf("%d found in location %d of the array\n",target, i);
      break;
    }
  }
  if (i == SIZE)
    printf("%d is not in the array\n", target);
}


int main(int argc, char const *argv[]) {

  printf("\n*** Print the array ***\n" );
  for (int i=0;i<SIZE;i++){
    printf("%d ", myArray[i]);
  }

  LinearSearch();

  printf("\n*** That was it ***\n");
  return 0;
}
