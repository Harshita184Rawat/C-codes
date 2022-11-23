#include<stdio.h>
void main()
{
    /*
    int ch='A',i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        if(j%2==1)
            printf("%c ",ch++);
        else{
            printf("%d ",ch++);
        }
        printf("\n");


    }
    */
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5-i;k>=1;k--)
        printf("  ");
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");

            }
        }
            printf("\n");


    }

}
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        for(k=9-i;k>=1;k--)
        printf(" ");
        {
            for(j=1;j<=i;j++)
            {
                if(i%2!=0)
                printf("* ");
                else
                printf("")

            }
        }
            printf("\n");


    }
}


