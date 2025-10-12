//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) 
    {
        printf("False\n");
        return 0;
    }
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isSymmetric = 1;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric) 
    {
        printf("True\n");
    } else 
    {
        printf("False\n");
    }
    for (int i = 0; i < rows; i++) 
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
