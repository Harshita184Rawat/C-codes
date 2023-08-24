/* Update N elements in an array given array of elements and a corresponding array of positions.

Sample:
Input -
arr = {0,1,2,3,4}
elements = {5,6}
position = {2,4}

Output -
arr = {0,5,2,6,4}
*/
#include<stdio.h>
void main()
{
    int arr[] = {0,1,2,3,4};
    int elements[] = {5,6};
    int position[] = {2,4};
    
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    int positionSize = sizeof(position)/sizeof(position[0]);
    
    for(int i=0;i<positionSize;i++)
    {
        for(int j =0;j<arrSize;j++)
        {
            if(position[i]==j+1)
            {
                arr[j]=elements[i];
            }
            else
                continue;
        }
    }
    
    for(int k=0;k<arrSize;k++)
    {
        printf("%d",arr[k]);
    }
}