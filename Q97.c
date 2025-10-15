//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

void printInitials(char *name) 
{
    char *token = strtok(name, " ");
    while (token != NULL) 
    {
        printf("%c.", token[0]);
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main() 
{
    char name[100];
    printf("Enter a name: ");
    gets(name);
    printInitials(name);
    return 0;
}
