#include <stdio.h>

int main() {
    int a[2][3];
    int b[2][3];
    int Product[2][3];
    
    // Input elements for the first matrix
    printf("Enter elements for the first matrix (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate the product of the matrices element-wise
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            Product[i][j] = a[i][j] * b[i][j];
        }
    }

    // Print the product matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
