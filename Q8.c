//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() 
{
    int n, sum = 0, i;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        sum += i;
    }

    printf("The sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
