// /Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) 
    {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++) 
    {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    if (rows1 != rows2 || cols1 != cols2) 
    {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }
    int **result = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) 
    {
        result[i] = (int *)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows1; i++) 
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);
    return 0;
}
