// A C Program to Find Factorial of a Number using looping and recursion.
#include<stdio.h>
void main()
{
    int n;
    int fact=1,i;
    printf("Enter the integer n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("factorial of %d is: %d ",n,fact);
}

