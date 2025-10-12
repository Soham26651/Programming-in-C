//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int col = 0; col < cols; col++) {
        int startCol = col;
        int startRow = 0;
        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }
    for (int row = 1; row < rows; row++) {
        int startCol = cols - 1;
        int startRow = row;
        while (startCol >= 0 && startRow < rows) {
            printf("%d ", matrix[startRow][startCol]);
            startCol--;
            startRow++;
        }
    }
    printf("\n");
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
