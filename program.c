#include<stdio.h>
 #include<stdlib.h>
 
 
 int main(){
 
 char option[]="yn";
char answer;
char answer1;

 printf("are you in college???\n");
printf("choose between y or n\n");
 scanf("%c", &answer);
 if(answer==option[0]){
printf("which one ,is it pu\n");
 printf("again choose betn y or n\n");

 scanf(" %c", &answer1);

 if(answer1==option[0]){
 printf("so basically , you are fucked up\n");

 }
else {
printf("you got some life\n");
}
 }
else{
 printf("damm you got some life");

}
return 0;
 }