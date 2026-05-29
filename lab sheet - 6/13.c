#include<stdio.h>
#include<string.h>
void reverse(){
    int reverse = 0, n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(n; n>0; n = n/10){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
    }
    printf("Reverse : %d", reverse);
}
int main(){
    reverse();
    return 0;
}