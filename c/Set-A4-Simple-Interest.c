//Write a C program to calculate simple interest.
#include <stdio.h>
int main(){
	

float si, p, r, t;

printf("Enter Principal Amount: ");
scanf("%f", &p);

printf("Enter Annual Rate of Interest: ");
scanf("%f", &r);

printf("Enter Time Period: ");
scanf("%f", &t);

si = (p*r*t)/100;

printf("Simple Interest:%.2f", si);

return 0;
}
