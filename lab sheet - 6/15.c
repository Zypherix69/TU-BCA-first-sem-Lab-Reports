#include<stdio.h>
void prime(){
    int n, isprime = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if(n == 0 || n == 1 )
        printf("0! or 1! = 1");
    else{
        for(int i=1; i<n; i++){
            if(n % i == 0 ){
                isprime = 1;
                break;
            }
        }
    }
    if(isprime = 0)
        printf("%d is Not a Prime Number.", n);
    else 
        printf("%d is a prime Number.", n);
}
int main(){
    prime();
    return 0;
}
