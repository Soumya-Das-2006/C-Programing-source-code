#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication Table up to %d:\n", n);
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d * %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}