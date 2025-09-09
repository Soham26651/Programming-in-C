//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() 
{
    int num, n;
    long long binary = 0;
    int remainder, place = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    n = num;

    while (num > 0) 
    {
        remainder = num % 2;          
        binary += remainder * place;  
        place *= 10;                  
        num /= 2; 
    }

    printf("Binary representation of %d is %lld\n", n, binary);

    return 0;
}
