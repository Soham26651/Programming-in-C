//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() 
{
    int num, digit, i;
    int count[10] = {0};
    int max = 0, mostFrequentDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        num = -num;
    }

    while (num > 0) 
    {
        digit = num % 10;  
        count[digit]++;   
        num /= 10;     
    }

    for (i = 0; i < 10; i++) 
    {
        if (count[i] > max) 
        {
            max = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", mostFrequentDigit);

    return 0;
}
