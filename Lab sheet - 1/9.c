#include<stdio.h>
    int main(){
        float m;
        printf("Enter Length in Kilometers : ");
        scanf("%f",&m);
        printf("%.2f in kilometers = %.2f in meters",m,1000*m);
    }