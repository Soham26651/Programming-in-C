/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

#include <stdio.h>

int main() 
{
    float percentage;
    char grade;

    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) 
    {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
        return 0;
    }

    if (percentage >= 90) 
    {
        grade = 'A';
    } 
    else if (percentage >= 80) 
    {
        grade = 'B';
    } 
    else if (percentage >= 70) 
    {
        grade = 'C';
    } 
    else if (percentage >= 60) 
    {
        grade = 'D';
    } 
    else 
    {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
