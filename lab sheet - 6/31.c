#include<stdio.h>
int isprime(int a){
    int isprime = 0;
    for(int i = 1; i<a; i++){
        if(a % i == 0)
           isprime = 1;
           break;
    }
    if(isprime = 0)
       return 0;
    else 
       return 1;
}
int main(){
    int a; 
    printf("Enter a Number : ");
    scanf("%d", &a);
    int result = isprime(a);
    printf("%d", result);
    return 0;
}