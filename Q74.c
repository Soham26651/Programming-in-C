//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    int **transpose = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) 
    {
        transpose[i] = (int *)malloc(rows * sizeof(int));
        for (int j = 0; j < rows; j++) 
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    for (int i = 0; i < cols; i++) 
    {
        free(transpose[i]);
    }
    free(transpose);
    return 0;
}
