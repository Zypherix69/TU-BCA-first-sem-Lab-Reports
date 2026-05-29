#include<stdio.h>
#include<math.h>
    int main(){
        int a, b, c , x, y;
        printf("Enter the value of Coefficients of the Quadratic Equation (A/B/C) : ");
        scanf("%d/%d/%d", &a, &b, &c);
        x = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
        y = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
        printf(" value of X is either %d or %d", x, y);
    return 0;
    }