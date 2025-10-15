//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char *str1, char *str2) 
{
    int count[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) 
    {
        count[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) 
    {
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] != 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    return 0;
}
