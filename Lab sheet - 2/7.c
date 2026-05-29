#include<stdio.h>
#include<math.h>
    int main(){
        float dr, hc, sc ,EOQ, TBO;
        printf("Enter Setup cost : ");
        scanf("%f", &sc);
        printf("Enter Demand Rate : ");
        scanf("%f", &dr);
        printf("Enter Holding cost : ");
        scanf("%f", &hc);
        EOQ = sqrt((2 * dr * sc)/hc);
        TBO = sqrt((2 * sc)/(dr * hc));
        printf("Economic order Quantity(EOQ) : %.2f\n",EOQ);
        printf("Time Between Orders(TBO) : %.2f", TBO);
    return 0;
    }
