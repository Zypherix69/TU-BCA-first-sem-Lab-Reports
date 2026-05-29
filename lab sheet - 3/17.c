#include<stdio.h>
int main(){
    int reverse = 0, n, digit;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(n; n>0; n = n/10){
        digit = n %10;
        reverse  = reverse * 10 + digit;
    }
    printf("Reverse of the Number is %d", digit);
    return 0;
}