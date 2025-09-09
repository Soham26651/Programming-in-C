//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() 
{
    int num, digit, product = 1, found = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        digit = num % 10;    
        if (digit % 2 == 1) 
        { 
            product *= digit; 
            found = 1;        
        }
        num = num / 10;       
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("1 (No odd digits found, assume 1)\n");

    return 0;
}
