#include<stdio.h>

int main(int argc, char const *argv[]) {

  const double PI = 3.14159;
  double radius;
  double circumference;

  printf("Enter radius of the circle: ");
  scanf("%lf", &radius);
  circumference = 2*PI*radius;
  printf("Circumference of the circle is %.3lf\n", circumference);
  return 0;
}
