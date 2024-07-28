#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");
  float C, F;
  printf("Enter Celsius temperature::  ");
  scanf("%f", &C);
   F=(9/5)*C+32;
  printf("Your Fahrenhite  value is = %f\n", F);
  return 0;
  getch();
}
