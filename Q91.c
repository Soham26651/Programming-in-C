//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

void removeVowels(char *str) 
{
    int i, j = 0;
    char temp[100];
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}