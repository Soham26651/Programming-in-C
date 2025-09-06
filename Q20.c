//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() 
{
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) 
    {
        case 1:
            printf("Day 1 is Monday.\n");
            break;
        case 2:
            printf("Day 2 is Tuesday.\n");
            break;
        case 3:
            printf("Day 3 is Wednesday.\n");
            break;
        case 4:
            printf("Day 4 is Thursday.\n");
            break;
        case 5:
            printf("Day 5 is Friday.\n");
            break;
        case 6:
            printf("Day 6 is Saturday.\n");
            break;
        case 7:
            printf("Day 7 is Sunday.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
