//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
    int *rowSums = (int *)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) 
    {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) 
        {
            rowSums[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
    for (int i = 0; i < rows; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    free(rowSums);
    return 0;
}
