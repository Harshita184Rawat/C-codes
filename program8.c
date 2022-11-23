\\program to swap two numbers

#include<stdio.h>
void main()
{
    int a=10, b=20;
    printf("Before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    print("\nAfter swap a=%d b=%d",a,b);

}
