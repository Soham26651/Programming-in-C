
//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char date[11];
    char monthStr[4];
    int day, month, year;

 
    scanf("%10s", date);


    scanf(date, "%d/%d/%d", &day, &month, &year);

    switch (month) 
    {
        case 1: strcpy(monthStr, "Jan"); break;
        case 2: strcpy(monthStr, "Feb"); break;
        case 3: strcpy(monthStr, "Mar"); break;
        case 4: strcpy(monthStr, "Apr"); break;
        case 5: strcpy(monthStr, "May"); break;
        case 6: strcpy(monthStr, "Jun"); break;
        case 7: strcpy(monthStr, "Jul"); break;
        case 8: strcpy(monthStr, "Aug"); break;
        case 9: strcpy(monthStr, "Sep"); break;
        case 10: strcpy(monthStr, "Oct"); break;
        case 11: strcpy(monthStr, "Nov"); break;
        case 12: strcpy(monthStr, "Dec"); break;
        default: strcpy(monthStr, "Invalid"); break;
    }


    printf("%02d-%s-%04d\n", day, monthStr, year);

    return 0;
}