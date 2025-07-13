#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of harmonic series up to %d: %.2f\n", n, sum);
    return 0;
}

