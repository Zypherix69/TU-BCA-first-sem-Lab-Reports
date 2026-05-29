#include<stdio.h>
int main(){
    int n, sum = 0, digit;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(n=n;n>0; n=n/10){
       digit = n % 10; 
       sum = sum + digit;
    }
    printf("Sum of each digit of the given Number is %d", sum);
    return 0;
}