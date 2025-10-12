//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) 
{
    int len = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not palindrome\n");
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  
    checkPalindrome(str);
    return 0;
}
