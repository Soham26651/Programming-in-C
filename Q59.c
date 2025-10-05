//Count even and odd numbers in an array.

#include <stdio.h> 
 
int main() 
{ 
    int n, i, evenCount = 0, oddCount = 0; 
 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
 
    int arr[n]; 
 
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 

    for(i = 0; i < n; i++) 
    { 
        if(arr[i] % 2 == 0) 
        { 
            evenCount++; 
        } 
        else 
        { 
            oddCount++; 
        } 
    } 

    printf("Total even numbers = %d\n", evenCount); 
    printf("Total odd numbers = %d\n", oddCount); 
    return 0; 
}