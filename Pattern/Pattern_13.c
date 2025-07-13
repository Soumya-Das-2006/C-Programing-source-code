#include <stdio.h>

int main() {
    int n; // Size of the grid (odd number)
    printf("Enter Odd number : ");
    scanf("%d", &n);
    int mid = n / 2 + 1; // Center point
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == mid || j == mid || 
                (i == 1 && j >= mid) || 
                (j == 1 && i <= mid) || 
                (i == n && j <= mid) || 
                (j == n && i >= mid)) {
                printf("* "); // Asterisk with a space
            } else {
                printf("  "); // Two spaces
            }
        }
        printf("\n");
    }
    return 0;
}
