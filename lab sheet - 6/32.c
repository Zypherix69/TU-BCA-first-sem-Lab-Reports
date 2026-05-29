#include<stdio.h>
int mul(int a){
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", a, i, a*i);
    }
}
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    mul(a);
    return 0;
}