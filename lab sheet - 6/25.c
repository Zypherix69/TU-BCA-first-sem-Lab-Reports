#include<stdio.h>
int reverse(int n, int x){
    if(n==0)
       return x;
    
    x = x * 10 + n % 10;
    return reverse(n/10, x);
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int result = reverse(n, 0);
    printf("%d", result);
    return 0;
}