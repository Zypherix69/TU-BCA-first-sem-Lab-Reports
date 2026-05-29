#include<stdio.h>
    int main(){
        int n,h,m,s,rs;
        printf("Enter time in seconds : ");
        scanf("%d",&n);
        h = n / 3600;
        rs = n % 3600;
        m = rs / 60;
        s = rs % 60;
        printf("%d seconds is %d Hours : %d Minutes : %d seconds",n,h,m,s);
    return 0;
    }