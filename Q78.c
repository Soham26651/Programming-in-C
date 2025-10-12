//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Invalid matrix\n");
        return 0;
    }
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int diagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];
    }
    printf("%d\n", diagonalSum);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
