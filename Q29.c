//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() 
{
    int n, i;
    long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) 
    factorial *= i;

    printf("Factorial of %d = %ld\n", n, factorial);

    return 0;
}
