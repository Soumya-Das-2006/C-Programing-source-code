// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i;
    unsigned long long t1=0,t2=1, nextTerm;
    printf("Enter the number of term:");
    scanf("%d",&n);
    
    printf("Fibolanacci Serie:%llu,llu,",t1,t2);
    for(i=3;i<=n;++i){
        nextTerm=t1+t2;
        printf("%llu,",nextTerm);
        t1=t2;
        t2=nextTerm;
    }
    

    return 0;
}