//Search for an element in an array using linear search.

#include <stdio.h>

int main() 
{
    int n, key;
    int i, foundIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);


    for (i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) 
    {
        printf("Element %d not found in the array.\n", key);
    } 
    else 
    {
        printf("Element %d found at index %d.\n", key, foundIndex);
    }

    return 0;
}

