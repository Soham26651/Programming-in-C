//Delete an element from an array.

#include <stdio.h>

int main() 
{
    int arr[100];
    int size, i, index;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= size) 
    {
        printf("Invalid index! Deletion failed.\n");
    } 
    else 
    {
        for (i = index; i < size - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) 
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}