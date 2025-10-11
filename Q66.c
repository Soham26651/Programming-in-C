//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() 
{
    int arr[100], n, i, pos, key;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    pos = 0;
    while (pos < n && arr[pos] < key) 
    {
        pos++;
    }

    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
