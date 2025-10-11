//Search in a sorted array using binary search.

#include <stdio.h>

int main() 
{
    int n, key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) 
    {
        mid = (low + high) / 2;

        if(arr[mid] == key) 
        {
            found = 1;
            break;
        } 
        else if(arr[mid] < key) 
        {
            low = mid + 1; // search in the right half
        } 
        else 
        {
            high = mid - 1; // search in the left half
        }
    }

    if(found)
        printf("Element %d found at index %d.\n", key, mid);
    else
        printf("-1");

    return 0;
}
