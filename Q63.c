//Merge two arrays.

#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) 
    {
        c[i] = a[i];
    }

    for(j = 0; j < n2; j++) 
    {
        c[n1 + j] = b[j];
    }

    printf("\nMerged array:\n");
    for(i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", c[i]);
    }

    return 0;
}
