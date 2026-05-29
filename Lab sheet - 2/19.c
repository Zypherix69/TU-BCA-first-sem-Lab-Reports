#include<stdio.h>
int main(){
    int choice;
    float r, a, c;
    printf("Enter Radius of the Circle : ");
    scanf("%f", &r);
    printf("Enter 1 to claculate Area and 2 for Cirmunference : ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        printf("Area of the circle is : %.2f",3.1415*r*r);
        break;
        case 2:
        printf("Circumference of the circle is : %.2f", 2*3.1415*r);
        break;
    }
    return 0;
}