/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//Function Declaration
int maximum(int num1, int num2);
int minimum(int num1,int num2);
int multiply(int num1,int num2);

int main() 
{
   int num1, num2;
   printf("Enter a value- no 1 : ");
   scanf("%d", &num1);
   printf("Enter a value- no 2 : ");
   scanf("%d", &num2);
   printf("%d ", minimum(num1, num2));//Funtion Call
   printf("%d ", maximum(num1, num2));
   printf("%d ", multiply(num1, num2));
   return 0;
}

//Function Implimentation
int maximum(int num1, int num2){
  int max=0;
  if(num1>num2)
    max=num1;
  if(num1<num2)
    max=num2;
    
return max;

}
int minimum(int num1,int num2){
  int min=0;
  if(num1>num2)
    min=num2;
  if(num1<num2)
    min=num1;
    
return min;
}

int multiply(int num1,int num2){
return num1*num2;
}
