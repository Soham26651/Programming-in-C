//Insert an element in an array at a given position.

#include <stdio.h>

int main() 
{
    int arr[100], n, pos, elem, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &elem);

    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = elem;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
