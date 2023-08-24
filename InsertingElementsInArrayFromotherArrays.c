/* Insert N elements into an array given array of elements and a corresponding array of positions
Note: The array positions here are 1-based, i.e., the position of the first element in the array is taken as '1'.

Sample:
Inputs -
arr = {0,1,2,3,4}
elements = {5,6}
positions={2,4}

Output -
arr = {0,5,1,6,2,3,4}
*/

#include <stdio.h>

int main() {
    
    int arr[] = {0,1,2,3,4};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    int elements[] = {5,6};
    int elementsSize = sizeof(elements)/sizeof(elements[0]);
    int positions[]={2,4};
    
   for(int i=0;i<elementsSize;i++)
   {
       for(int j=arrSize-1;j>=positions[i]-1;j--)
       {
           arr[j+1]=arr[j];
       }
       
       arr[positions[i]-1]=elements[i];
       arrSize++;
       
   }
    
    for(int i=0;i<arrSize+elementsSize;i++)
    {
        printf("%d \t",arr[i]);
    }
	return 0;
}