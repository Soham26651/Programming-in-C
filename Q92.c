//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

char findFirstRepeatingChar(char *str) 
{
    int i, len = strlen(str);
    for (i = 0; i < len; i++) 
    {
        char current = str[i];
        if (current >= 'a' && current <= 'z') 
        {
            for (int j = i + 1; j < len; j++) 
            {
                if (str[j] == current) 
                {
                    return current;
                }
            }
        }
    }
    return '\0';  

int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char result = findFirstRepeatingChar(str);
    if (result) 
    {
        printf("First repeating lowercase alphabet: %c\n", result);
    } 
    else 
    {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
