//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() 
{
    int num1, num2, result;
    char operator;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
