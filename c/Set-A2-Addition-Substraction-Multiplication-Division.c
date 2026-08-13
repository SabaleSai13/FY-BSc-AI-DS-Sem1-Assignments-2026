//Write a C program to accept two integers from the user and display their addition, substracton, multiplication and division.
#include <stdio.h>
int main(){
  
int a,b;

printf("Enter integer 1: ");
  scanf("%d", &a);
printf("Enter integer 2: ");
  scanf("%d", &b);

  printf("Addition:%d\n", a+b);
  printf("Subtraction:%d\n", a-b);
  printf("Multiplication:%d\n", a*b);
  printf("Division:%d\n", a/b);
  
return 0;
}
