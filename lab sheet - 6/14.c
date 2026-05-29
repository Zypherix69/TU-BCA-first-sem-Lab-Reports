#include<stdio.h>
void palindrome(){
    int n, reverse = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int org = n;
    for(n; n>0; n = n/10){
        int digit = n % 10;
        reverse  = reverse * 10 + digit; 
    }
    if(org == reverse)
       printf("%d is a palindrome.", org);
    else
       printf("%d is Not a palindrome.", org);
}
int main(){
    palindrome();
    return 0;
}