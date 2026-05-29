#include<stdio.h>
int main(){
    int n, a = 0, b, org;
    printf("Enter a Number : ");
    scanf("%d", &n);
    org = n;
    if(n == 0){
       printf(" 0 is a Riley Number");
       return 0;
    } 
    for(n; n>0; n = n/10){
        b = n % 10;
        if(b % 2 != 0){
           a = 1;
           break;
        }     
    }
    if(a == 0)
       printf("%d is a Riley Number.", org);
    else
       printf("%d is Not a Riley Number.", org);
    return 0;
}