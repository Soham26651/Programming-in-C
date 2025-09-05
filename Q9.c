//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>   

int main() 
{
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
