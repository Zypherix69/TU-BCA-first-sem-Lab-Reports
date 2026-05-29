#include<stdio.h>
void calc(int a, int b){
    printf("Sum = %d\n", a+b);
    printf("Difference = %d\n", a-b);
    printf("product = %d", a*b);
}
int main(){
    int a, b;
    printf("Enter any Two Numbers : ");
    scanf("%d %d", &a, &b);
    calc(a, b);
    return 0;
}