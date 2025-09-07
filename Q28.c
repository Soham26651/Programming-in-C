//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long product = 1

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("No even numbers in the range.\n");
        return 0;
    }

    for (i = 2; i <= n; i += 2) 
    product *= i;

    printf("Product of even numbers from 1 to %d = %ld\n", n, product);

    return 0;
}
