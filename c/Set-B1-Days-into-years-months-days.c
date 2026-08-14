//Write a c program to covert days into years, months and days.
#include <stdio.h>
int main(){
	
    int days,years,months;

    printf("Enter Days: ");
    scanf("%d", &days);

    years = days/365;
    days = days%365;
    months = days/30;
    days = days%30;

    printf("Years:%d\n", years);
    printf("Months:%d\n", months);
    printf("days:%.d",days);

    return 0;
}
