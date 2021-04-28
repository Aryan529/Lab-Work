#include <stdio.h>
 
// Iterative BS
int binarySearch(int A[], int N, int x)
{

    int low = 0, high = N - 1;
 
    while (low <= high)
    {
      
 
        int mid = (low + high)/2;    
        if (x == A[mid])
            return mid;
 
        else if (x < A[mid])
            high = mid - 1;
 
        else
            low = mid + 1;
    }
 
    return -1;
}
 
int main(void)
{
    int A[] = { 2, 5, 6, 8, 9, 10 };
    int target = 5;
 
    int n = sizeof(A)/sizeof(A[0]);
    int index = binarySearch(A, n, target);
 
    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found in array");
 
    return 0;
}
