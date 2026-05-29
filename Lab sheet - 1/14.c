#include<stdio.h>
#include<math.h>
    int main(){ 
        float CI, P, R, T, N, A;
        printf("Enter principle : ");
        scanf("%f",&P);
        printf("Enter Rate : ");
        scanf("%f",&R);
        printf("Enter Time : ");
        scanf("%f",&T);
        printf("Enter the Number of Times Interest is Compounded per year : ");
        scanf("%f",&N);
        A = P * pow( (1 + R/N),(N*T));
        printf("%f is the required Compound Interest",A);
    return 0;
    }