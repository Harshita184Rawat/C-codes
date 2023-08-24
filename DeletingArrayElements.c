/*Delete N elements from an array given array of elements and a corresponding array of positions.

Sample:
Input -
arr = {0,1,2,3,4}
positions = {2,4}

Output -
arr = {0, 2, 3}
*/
#include <stdio.h>
int main() {
    int arr[] = {0, 1, 2, 3, 4};
    int positions[] = {2, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int positionsSize = sizeof(positions) / sizeof(positions[0]);
    
    for (int i = positionsSize - 1; i >= 0; i--) {
        int pos = positions[i];
        
        if (pos >= 0 && pos < arrSize) {
            for (int j = pos; j < arrSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arrSize--;
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
