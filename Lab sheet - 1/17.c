#include<stdio.h>
#include<math.h>
    int main(){
        float a, x;
        printf("Enter a number : ");
        scanf("%f",&a);
        x = sqrt(a);
        printf("sqrt of %f is %.2f", a, x);
    return 0;
    }