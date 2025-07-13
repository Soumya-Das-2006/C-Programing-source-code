#include <stdio.h>

void main() {
    int n, a, i;
    int sum_odd = 0, sum_even = 0;  // Initialize the sum variables to 0.

    printf("\nEnter the start number: ");
    scanf("%d", &a);
    printf("\nEnter the End number: ");
    scanf("%d", &n);

    if (a < n) {
        for (i = a; i < n; i++) {
            if (i % 2 == 0) {
                sum_even += i;
            } else {
                sum_odd += i;
            }
        }

        printf("Sum of even numbers between %d and %d is = %d\n", a, n-1, sum_even);
        printf("Sum of odd numbers between %d and %d is = %d\n", a, n-1, sum_odd);
    } else {
        printf("\n\nNumber range is not valid. Start number should be less than end number.\n");
    }
}
