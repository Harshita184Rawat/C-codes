#include<stdio.h>
void main()
{
    int i;
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0;i<n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d \t",array[i][j]);
        }
        
    }
    

}