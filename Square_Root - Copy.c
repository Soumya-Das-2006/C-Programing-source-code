#include <stdio.h>
#include <math.h>

int main() {
    float num, squrt;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Sorry, Square root does not occur in negative numbers...\n");
    } else {
        squrt = sqrt(num);
        printf("Square root of %.2f = %.2f\n", num, squrt);
    }
}