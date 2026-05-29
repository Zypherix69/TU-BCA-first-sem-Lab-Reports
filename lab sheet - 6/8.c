#include<stdio.h>
int fact(int n){
    int fact = 1;
    for(int i=1; i<n; i++)
        fact = fact * i;
    return fact;
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int result = fact(n);
    printf("%d! = %d", n-1, result);
    return 0;
}