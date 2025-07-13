#include <stdio.h>
    int main(){
        int var1,var2;
            printf("Enter the value of 1st Number: ");
            scanf("%d",&var1);
            printf("Enter the value of 2nd Number: ");
            scanf("%d",&var2);
            printf("Before swapping two number: %d & %d\n",var1,var2);
                var1=var1+var2;
                var2=var1-var2;
                var1=var1-var2;
        printf("After swapping two number:%d & %d\n",var1,var2);
return 0;    
}