#include<stdio.h>
    int main(){
        float r, h, a;
        printf("Enter Radius and Height of the cylinder : ");
        scanf("%f %f", &r, &h);
        a = (2*3.1415*r*h) + (2*3.1415*r*r);
        printf("Surface Area of the cylinder is %.2f",a);
        return 0;
    }