#include<stdio.h>
#include<math.h>
    int main(){
        int b, p, Answer;
        printf("Enter Base : ");
        scanf("%d", &b);
        printf("Enter Power : ");
        scanf("%d", &p);
        Answer = pow(b,p);
        printf("%d^%d = %d",b ,p, Answer);
    return 0;
    }