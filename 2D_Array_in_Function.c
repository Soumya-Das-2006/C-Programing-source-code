#include <stdio.h>

// Function to add two 2D arrays
void add_matrices(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add the matrices
    add_matrices(rows, cols, mat1, mat2, result);

    // Display the result
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
