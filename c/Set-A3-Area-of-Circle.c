//Write a C program to calculate area of circle.
#include <stdio.h>
int main(){
	

float radius,area;
float pie = 3.14;

printf("Enter radius of Circle: ");
scanf("%f", &radius);

area = pie*(radius*radius);

printf("Area of Circle:%.2f", area);

return 0;
}
