#include<stdio.h>
int factorial(int a){
    if(a == 0)
       return 1;
    return a * factorial(a-1);
}
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    int result = factorial(a);
    printf("%d! = %d", a, result);
    return 0;
}