#include<stdio.h>
    void main(){
        printf("write the amount of money in Rupees: \n");
        float RS, D;
        scanf("%f", &RS);
        D = RS / 115;
        printf("%f is %f in Dollars \n", RS, D);
    }