#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;  // Use unsigned long long for large factorials

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;  // Multiply fact by i at each iteration
        }
        printf("Factorial of %d = %d\n", n, fact);  // Use %llu for unsigned long long
    }

    return 0;
}
