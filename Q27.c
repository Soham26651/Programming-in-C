//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= 2*n; i += 2) 
    sum += i;

    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
