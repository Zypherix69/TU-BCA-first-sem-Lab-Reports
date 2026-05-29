#include<stdio.h>
int main(){
    int reverse = 0, n, org, digit;
    printf("Enter a Number : ");
    scanf("%d", &n);
    org = n;
    for(n; n>0; n=n/10){
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }
    if(org==reverse)
       printf("Given Number is a palindrome");
    else
       printf("Given Number is Not a palindrome");
    return 0;
}