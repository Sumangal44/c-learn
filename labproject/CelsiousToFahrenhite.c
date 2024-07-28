 #include <stdio.h>
 #include <stdlib.h>

 void main() {
   system("clear");
   float C, F;
   printf("Enter Celsius temperature::  ");
  scanf("%f", &C);
   F = (9*C/5)+32;
   printf("Your Fahrenhite  value is = %f\n", F);
   getch();
 }
