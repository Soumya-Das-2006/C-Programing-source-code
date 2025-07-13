#include<stdio.h>
#include<math.h>
void main()
{
float p;
int t;
float r;
float s;
float c;
printf("\n Enter Princial Amount: ");
        scanf("%f" , &p);
printf("\n Enter Time: ");
        scanf("%d" , &t);
printf("\n Enter Interest Rate: ");
        scanf("%f" , &r);
s = p+((p*t*r)/100);
printf("\n Simple Interest Rate: %.2f",s);
c = p*((pow((1+r/100),t)));
printf("\n Compound Interest Rate: %.2f",c);
}