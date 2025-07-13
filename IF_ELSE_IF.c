#include<stdio.h>
#include<string.h>

int main()
{float p;
char div[10];
printf("\n Enter Student Percentage : ");
scanf(" %f",&p);
        if (p >= 80)
    strcpy(div, "First");
        else if (p < 80 && p >= 50)  
    strcpy(div, "Second");   
        else if (p < 50 && p >= 36)
    strcpy(div, "Pass");   
        else   
    strcpy(div,"Fail");
    printf("\n Division = %s",div);
    return 0;
}