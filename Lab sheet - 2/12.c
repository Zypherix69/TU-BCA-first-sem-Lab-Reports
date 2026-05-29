#include<stdio.h>
    int main(){
        int a;
        printf("Enter a number : ");
        scanf("%d", &a);
        if (a<0)
           printf("%d is the absolute value of the entered value.", a*-1);
        else
           printf("%d is the absolute value of the entered value. ",a);
    return 0;
    }