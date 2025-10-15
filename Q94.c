//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

char* findLongestWord(char *sentence) 
{
    char *longest = NULL;
    char *token = strtok(sentence, " ");
    while (token != NULL) 
    {
        if (longest == NULL || strlen(token) > strlen(longest)) 
        {
            longest = token;
        }
        token = strtok(NULL, " ");
    }
    return longest;
}

int main() 
{
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    char *longestWord = findLongestWord(sentence);
    if (longestWord) 
    {
        printf("Longest word: %s\n", longestWord);
    } 
    else 
    {
        printf("No words found.\n");
    }
    return 0;
}
