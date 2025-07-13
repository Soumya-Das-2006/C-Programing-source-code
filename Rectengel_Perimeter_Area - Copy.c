#include<stdio.h>
void main()
{
    float l;
    float b;
    float p;
    float a;
        printf("\n Enter Rectengle Length: ");
        scanf("%f" , &l);
        printf("\n Enter Rectengle Breadth: ");
        scanf("%f" , &b);
           p = 2*(l + b);
        printf("\n Rectengle Perimeter: %f",p);
            a = l * b;
        printf("\n Rectengel Area: %f",a);
}