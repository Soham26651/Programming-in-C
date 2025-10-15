//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areRotations(char *str1, char *str2) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) 
    {
        return false;
    }
    char temp[100];
    strcpy(temp, str1);
    strcat(temp, str1);
    return strstr(temp, str2) != NULL;
}

int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (areRotations(str1, str2)) 
    {
        printf("Rotation\n");
    } 
    else 
    {
        printf("Not rotation\n");
    }
    return 0;
}
