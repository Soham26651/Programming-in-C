//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    bool isDistinct = true;
    int *diagonal = (int *)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = false;
                break;
            }
        }
    }
    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(diagonal);
    return 0;
}
