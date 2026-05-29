#include<stdio.h>
    int main(){
        int n,a,r;
        printf("Enter Number of days : ");
        scanf("%d",&n);
        r = n / 30;
        a = n % 30;
        printf("%d day is %d month : %d days",n,r,a);
    return 0;
    }