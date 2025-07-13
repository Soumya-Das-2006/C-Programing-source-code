#include <stdio.h>
#include <math.h>

int main() {
    float base, power, result;

    printf("Enter Power: ");
    scanf("%f", &base);
    printf("Enter Power: ");
    scanf("%f", &power);
    result = pow(base,power);
    printf("Result is:\t %.2f^%.2f = %.2f\n", base, power, result);
  return 0;
}