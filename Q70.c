//Rotate an array to the right by k positions.

#include <stdio.h>

int main() 
{
    int arr[100], n, k, i;
    int temp[100];  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) 
    {
        temp[i] = arr[n - k + i];
    }

    for (i = 0; i < n - k; i++) 
    {
        temp[k + i] = arr[i];
    }

    for (i = 0; i < n; i++) 
    {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
