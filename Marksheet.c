#include<stdio.h>
void main()
{
int B,E,M,P,C,Bi,t;
float a,p;
printf("\n Enter the Bengali no.: ");
scanf("%d", &B);
printf("\n Enter the English no.: ");
scanf("%d", &E);
printf("\n Enter the Mathemetics no.: ");
scanf("%d", &M);
printf("\n Enter the Physics no.: ");
scanf("%d", &P);
printf("\n Enter the Chemistry no.: ");
scanf("%d", &C);
printf("\n Enter the Biology no.: ");
scanf("%d", &Bi);
t = B + E + M + P + C + Bi ;
printf("\n Total No. : %d",t);
a = t/6;
printf("\n Avarage : %.2f",a);
p = (t*100)/600;
printf("\n Percentage : %.2f",p);
}