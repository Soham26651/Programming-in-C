//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() 
{
    int num, original, first, last, swapped, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;         
    last = num % 10;    

    while (num >= 10) 
    {
        num = num / 10;
        multiplier *= 10;
    }
    first = num;            

    if (multiplier == 1 && original < 10) 
    {
        printf("Swapped number = %d\n", original);
        return 0;
    }

    int middle = original % multiplier;   
    middle = middle / 10;                 

    swapped = last * multiplier + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
