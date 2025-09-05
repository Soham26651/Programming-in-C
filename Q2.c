//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() 
{
    float num1, num2, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n", difference);
        printf("Product = %.2f\n", product);
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}
