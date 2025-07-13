#include <stdio.h>

int main() {
    int lower, upper;
    printf("Enter lower and upper bounds:\n");
    scanf("%d %d", &lower, &upper);
    int found=0;

    printf("Armstrong numbers between %d and %d:\n", lower, upper);
    for(int num = lower; num <= upper; num++) {
        int temp = num;
        int sum = 0;
        int digit;
        while(temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if(sum == num) {
            printf("%d\n", num);
            found=1;
        }
    }
    if(!found)
            {printf("No Amstrong Number\n");}
    
    return 0;
}
