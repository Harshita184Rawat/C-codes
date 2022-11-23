//Write a C Program to display the first 25 prime numbers and their sum
#include<stdio.h>
void main()
{
    int i,c,n, sum=0;//iterating for i and count for

C printf("Enter the number to find between the prime number =");

scanf("%d", &n); for(i=2; i<n; i++)

{ for (c=2; c<=i; c++)//c is check for all i if i%c may be zero than the no is not prime

if(i%c==0)

break; }

if(i==c)

{ printf("\n%d is a prime number.", i); sum-sum+1; printf("\tThe sum value for %d is =%d", i, sum); } }
}
