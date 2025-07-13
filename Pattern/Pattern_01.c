#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number pattern No.: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        {for(j=n;j>=1;j--)
        {if(i>=j)
            printf("%d",i);
            else
            printf(" ");
            }
        printf("\n");
        }
}