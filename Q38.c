//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() 
{
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        digit = num % 10;   
        sum += digit;      
        num = num / 10;   
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
