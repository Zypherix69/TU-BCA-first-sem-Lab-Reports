#include<stdio.h>
int sum(int n){
    if(n == 0) 
        return 0;
    return n + sum(n - 1); 
}
int main(){
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Invalid input. Only non-negative integers allowed.\n");
        return 1;
    }
    int result = sum(n);
    printf("Sum of numbers from 0 to %d is %d\n", n, result);
    return 0;
}