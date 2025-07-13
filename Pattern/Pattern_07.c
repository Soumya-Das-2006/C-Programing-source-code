#include <stdio.h>
int main() {
    int n;
    printf("Enter number pattern No.: ");
    scanf("%d",&n);
    for(int i = 0; i < 2*n+1; i++) {
        int rows = i <= n ? i : 2*n-i;
        for(int j = 0; j < n-rows; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2*rows-1; k++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}