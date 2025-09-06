//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) 
    {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
    } 
    else 
    {
        printf("Roots are complex");
    }

    return 0;
}

