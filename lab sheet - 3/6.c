#include<stdio.h>
int main(){
    int i, n, ans = 1;
    printf("Enter a Number to Calculate Factorial : ");
    scanf("%d", &n);
    if(n==0){
      printf(" 0! = 1");
      return 0;
    }
    if(n<0){
        printf("Factorial of a -ve Number is Not Defined.");
        return 0;
    }
    for(i=1; i<=n; i++){
        ans = ans * i;
    }       
    printf("%d! = %d", n, ans);
    return 0;
}