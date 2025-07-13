#include <stdio.h>

int main()
{
    int i, j, n, mid;

    // Input number of rows
    printf("Enter an odd number of rows: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1; // Exit if input is not odd
    }

    mid = n / 2 + 1; // Center point

    // Generate the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print '*' for middle row, middle column, or boundaries
            if (i == mid || j == mid) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
