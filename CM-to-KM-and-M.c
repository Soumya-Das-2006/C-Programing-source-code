#include<stdio.h>
void main()
{
float c , k , m;
    printf("\n Enter the Length CM : ");
    scanf("%f" , &c);
       k = c/1000000 ;
       m = c/100 ;
    printf("\n Length in KM: %f",k);
    printf("\n Length in M: %f",m);
}