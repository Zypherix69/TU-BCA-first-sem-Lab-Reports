#include<stdio.h>
    int main(){
        int a, b;
        printf("Enter first Number : ");
        scanf("%d", &a);
        printf("Enter second Number : ");
        scanf("%d", &b);
        (a>b) ? printf("%d + %d = %d", a, b, a+b ) : printf("%d * %d = %d", a, b, a*b );
    return 0;
    }