//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum += matrix[i][j];
        }
    }
    printf("%d\n", sum);
    for (int i = 0; i < rows; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}