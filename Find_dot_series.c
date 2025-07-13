#include <stdio.h>

int main() {
    int n,i;
    float sum ;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("The sum of the series is: %f\n", sum);
    return 0;
}
