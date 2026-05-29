#include<stdio.h>
    int main(){
        float q, p, gs;
        printf("Enter price of the Computer : ");
        scanf("%f", &p);
        printf("Enter the Number of Computers sold in a month : ");
        scanf("%f", &q);
        gs = 1500 + (q * 200) + (q * p * 0.02);
        printf("Gross salary :%.2f",gs);
    return 0;
    }