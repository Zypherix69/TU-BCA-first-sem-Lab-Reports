#include<stdio.h>
    int main(){
        int a, b, sum, diff, divQ, divR, mul;
        printf("Enter first Number :  ");
        scanf("%d", &a);
        printf("Enter second Number :  ");
        scanf("%d", &b);
        sum = a+b;
        diff = a-b;
        mul = a*b;
        printf("%d + %d = %d \n", a, b, sum);
        printf("%d - %d = %d\n", a, b, diff);
        printf("%d * %d = %d\n", a, b, mul);
        if (b !=0)
        printf("%d / %d =%d(Quotient) and %d(Remainder) \n", a, b, a/b, a%b);
        else
        printf("division by zero is not possible");
    }