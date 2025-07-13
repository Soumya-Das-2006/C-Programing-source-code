#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\n Enter First no.: ");
    scanf("%f",&a);
    printf("\n Enter Second no.: ");
    scanf("%f",&b);
    c = a+b;
    printf("\n a + b= %.2f",c);
    c = a-b;
    printf("\n a - b= %.2f",c);
    c = a*b;
    printf("\n a * b= %.2f",c);
    c = a/b;
    printf("\n a / b= %.2f",c);
    return 0;
}