#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for( int i=1; i<=n; i++)
        fact = fact * i;
    return fact;
}
int main(){
    int n; 
    printf("Enter a number : ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d! = %d", n, result);
    return 0;
}