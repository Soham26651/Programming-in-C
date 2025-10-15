//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

void printInitialsWithSurname(char *name) 
{
    char *token = strtok(name, " ");
    while (token != NULL) {
        if (token[1] == '\0') {
            printf("%c.", token[0]);
        }
        token = strtok(NULL, " ");
    }
    printf(" %s\n", token);
}

int main() 
{
    char name[100];
    printf("Enter a name: ");
    gets(name);
    printInitialsWithSurname(name);
    return 0;
}
