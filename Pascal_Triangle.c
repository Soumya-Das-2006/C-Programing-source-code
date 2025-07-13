#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int coef = 1; // Reset coef at the beginning of each row

        // Corrected spacing for proper alignment
        for (int space = 1; space <= rows - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1); // Update coef for next element
        }
        printf("\n");
    }
    return 0;
}
