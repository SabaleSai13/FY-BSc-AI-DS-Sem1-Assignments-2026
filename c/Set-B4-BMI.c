//Write a c program to calculate BMI (Body Mass Index).
#include <stdio.h>
int main(){
	
float bmi,height,weight;

printf("Enter your Height: ");
scanf("%f",&height);
printf("Enter your Weight: ");
scanf("%f",&weight);

bmi = weight/(height*height);

printf("Your BMI:%.2f", bmi);

	return 0;
}
