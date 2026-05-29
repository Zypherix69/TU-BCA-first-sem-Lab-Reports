#include<stdio.h>
void square(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    printf("%d ^ 2 = %d", a, a*a);
}
int main(){
    square();
    return 0;
}