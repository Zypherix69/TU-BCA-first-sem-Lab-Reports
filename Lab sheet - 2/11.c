#include<stdio.h>
    int main(){
        int a, b, c, d;
        printf("Enter four numbers(a b c d) : ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a>b && a>c && a>d)
           printf("%d is the Greatest Number.", a);
        else if(b>a && b>c && b>d)
           printf("%d is the Greatest Number.", a);
        else if(c>b && c>a && c>d)
           printf("%d is the Greatest Number.", c);
        else
           printf("%d is the greatest NNumber.", d);
    return
    }