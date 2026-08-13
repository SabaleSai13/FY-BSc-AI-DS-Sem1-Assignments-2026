//Write a c program to swap two numbers using third variable.
#include <stdio.h>
int main(){
	
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n\n", b);

    c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}
