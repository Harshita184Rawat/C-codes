//Write a C Program to Calculate the Sum of Natural Numbers.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");// n : natural no.
    scanf("%d",&n);
    int sum=0;
    int i;//iterating variable

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("\n intermediate Sum %d",sum);

    }
    printf("\n Final Sum %d",sum);

}

