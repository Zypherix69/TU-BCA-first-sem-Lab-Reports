#include<stdio.h>
    int main(){
        int a, b, c;
        printf("Enter any Two Numbers : ");
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("(%d + %d)^3 = %d", a, b, c*c*c);
    }