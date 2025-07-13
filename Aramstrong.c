#include <stdio.h>

int main() {
    int num, original_num, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is not an Armstrong number.\n", original_num);
    }

    return 0;
}
