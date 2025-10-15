//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *word) 
{
    int start = 0;
    int end = strlen(word) - 1;
    while (start < end) 
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char *sentence) 
{
    char *word = strtok(sentence, " ");
    while (word != NULL) 
    {
        reverseWord(word);
        word = strtok(NULL, " ");
    }
}

int main() 
{
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    reverseWordsInSentence(sentence);
    printf("Reversed words: %s\n", sentence);
    return 0;
}
