/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1,mark2,Avg;
  float sum; //variable

  printf("Enter the mark 1:- ");
  scanf ("%d",&mark1); //getting inputs
  printf("Enter the mark 2:- ");
  scanf ("%d",&mark2);//getting inputs

 avg = (mark1 + mark2)/2.0;

 printf("Average marks is %d.", Avg); //Display
  return 0;
}

