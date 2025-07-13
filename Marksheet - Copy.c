#include<stdio.h>
#include<string.h>
void main()
{
int rlno, B,E,M,P,C,Bi,ca,t;
float a,p;
char nm[20],div[10];
        printf("\n \t Input the Roll Number of the student : ");  
    scanf("%d", &rlno);   
        printf("\n \tInput the Name of the Student: ");  
    scanf("%s",&nm);
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
        printf("\n Enter the Computer Application no.: ");
scanf("%d", &ca);
    t = B + E + M + P + C + ca ;
printf("\n Total No. : %d",t);
    a = t/6;
printf("\n Avarage : %.2f",a);
    p = (t*100)/600;
printf("\n Percentage : %.2f",p);
        if (p >= 80)
    strcpy(div, "First");
        else if (p < 80 && p >= 50)   
    strcpy(div, "Second");   
        else if (p < 50 && p >= 36)   
    strcpy(div, "Pass");   
        else   
    strcpy(div,"Fail");
    printf("\n Division = %s",div);
}