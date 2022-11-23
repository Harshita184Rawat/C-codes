//Write a C Program to Calculate the Sum of Natural Numbers.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    if (a>=1&&b>=1)
        printf("The sum of the entered natural numbers is:%d",a+b);
    else
        printf("Entered numbers are not natural numbers");
}

