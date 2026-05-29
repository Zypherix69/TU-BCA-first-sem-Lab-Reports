#include<stdio.h>
void check(int n){
    if(n<0)
       printf("Negative");
    else if(n>0)
       printf("Positive");
    else
       printf("Neutral");
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    check(n);
    return 0;
}