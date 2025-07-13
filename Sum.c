#include<stdio.h>
void main()
{
    int i, sodd = 0, seven = 0;
    for (i = 51; i<= 550; i++)
    {if (i % 2==0){
        seven += i;}
        else{
        sodd += i;}
    }
printf("Sum of even numbers: %d\n",seven);
printf("Sum of odd numbers: %d\n", sodd);
}