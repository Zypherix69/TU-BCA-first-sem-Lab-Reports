#include<stdio.h>
void circle(){
    float r;
    printf("Enter Radius of the Circle : ");
    scanf("%f", &r);
    printf("Area = %.2f\n", 3.1415*r*r);
    printf("Circumference = %.2f\n", 2*3.1415*r);
}
int main(){
    circle();
    return 0;
}