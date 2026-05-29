#include<stdio.h>
    int main(){
        float p,t,r;
        printf("Enter principle : ");
        scanf("%f",&p);
        printf("Enter Time : ");
        scanf("%f",&t);
        printf("Enter Rate : ");
        scanf("%f",&r);
        printf("Simple interest for given value is %.2f",(p*t*r)/100);
    return 0;
    }