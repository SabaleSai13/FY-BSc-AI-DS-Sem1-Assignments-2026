//Write a c program to accept the basic salary of an employee and calculate the gross salary using HRA and DA.
#include <stdio.h>
int main(){
	
    float salary,hra,da,gross_salary;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    //HRA = House rent Allowence, normally 20% of salaray
    hra = salary*(20.0/100.0);
    //DA = Dearness Allowance, normally 10%
    da = salary*(10.0/100.0);

    //gross salary formula
    gross_salary = salary+hra+da;

    printf("HRA:%.2f\n", hra);
    printf("DA:%.2f\n", da);
    printf("Gross Salary:%.2f",gross_salary);

    return 0;
}
