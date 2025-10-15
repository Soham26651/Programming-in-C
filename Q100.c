//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

void printSubstrings(char *str) 
{
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        for (int j = i + 1; j <= len; j++) 
        {
            printf("%.*s", j - i, str + i);
            if (j < len) 
            {
                printf(",");
            }
        }
    }
}

int main() 
{
    char str[] = "abc";
    printSubstrings(str);
    return 0;
}