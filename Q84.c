//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
#include <string.h>

void convertToUppercase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  
    convertToUppercase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
