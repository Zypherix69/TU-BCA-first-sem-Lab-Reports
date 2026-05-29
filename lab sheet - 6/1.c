#include<stdio.h>
void Sum(int a, int b){
    int c = a + b;
    printf("%d + %d = %d", a, b, a+b);
}
int main(){
    int a, b;
    printf("Enter any two Numbers : ");
    scanf("%d %d", &a, &b);
    Sum(a, b);
    return 0;
}