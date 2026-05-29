#include<stdio.h>
    int main(){
        int a;
        printf("Enter a Numebr : ");
        scanf("%d", &a);
        if (a<0)
          printf("%d is a Negative Number.",a);
        else if (a>0)
          printf("%d is a Positive Number.",a);
        else
          printf("%d is neither Positive nor Negative.",a);
    return 0;
    }