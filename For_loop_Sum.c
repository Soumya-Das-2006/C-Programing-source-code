#include <stdio.h>

int main() {
    int i, a, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &a);
    
    for (i = 0; i <= a; i++) {
        sum += i;
    }
    printf("Sum of numbers from 0 to %d is: %d\n", a, sum);
    
    return 0;
}