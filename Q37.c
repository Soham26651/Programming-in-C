//Write a program to find the LCM of two numbers.

#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int a, b, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    hcf = gcd(a, b);

    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
