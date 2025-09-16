//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() 
{
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }

    if (sum == num && num != 0)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

    return 0;
}
