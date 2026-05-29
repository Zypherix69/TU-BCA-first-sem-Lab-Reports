#include<stdio.h>
    int main(){
        int price, sv, yos;

        printf("Enter the purchase price of the Item : ");
        scanf("%d", &price);
        printf("Enter salvage value of the Item : ");
        scanf("%d", &sv);
        printf("Enter the Number of years of service : ");
        scanf("%d", &yos);

        printf("Depriciation of the Item is %.2f", (float)(price-sv / yos) );
    return 0;
    }