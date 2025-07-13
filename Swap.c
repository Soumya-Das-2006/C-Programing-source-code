#include<stdio.h>
int main() {
    int a = 5 , b = 3 , temp;
    printf("Before swap a & b is %d %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap a & b is %d %d \n",a,b);
    return 0;
}