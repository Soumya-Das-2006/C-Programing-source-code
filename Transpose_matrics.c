#include <stdio.h>

int main() {
    int a[2][3];
    int transpose[3][2];

    // Input elements for the matrix
    printf("Enter elements for the matrix (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
