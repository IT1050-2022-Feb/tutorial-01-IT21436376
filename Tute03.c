/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n_th, i, count=0;

  printf("Enter the n Value You need ? : ");
  scanf("%d",&n_th);
    //Calculation
  for(i=1;i<=n_th;i++){
    count =count +i;
  }
    //display
  printf("\nThe Sum of all n terms is : %d ",count);
  return 0;
}

