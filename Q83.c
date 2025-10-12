//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>  
#include <string.h>

void countVowelsAndConsonants(char str[]) 
{
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } else 
            {
                consonants++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    countVowelsAndConsonants(str);
    return 0;
}
