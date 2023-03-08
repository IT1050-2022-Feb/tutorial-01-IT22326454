/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int n1,n2,avg;
   
   printf("Input first number:");
   scanf("%d",&n1);
   
   printf("Input Second Number:");
   scanf("%d",&n2);
   
   avg=((n1+n2)/2);
   printf("Average is: %d",avg);
  
  return 0;
}

