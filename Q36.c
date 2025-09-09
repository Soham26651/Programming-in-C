//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", x, y, a);

    return 0;
}
