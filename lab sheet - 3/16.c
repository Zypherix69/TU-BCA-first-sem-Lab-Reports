#include<stdio.h>
int main(){
    int count = 0, n;
    printf("Enter a Numebr : ");
    scanf("%d", &n);
    if(n==0)
       count = 1;
    else{ 
       for(n; n!=0; n = n/10)
       count = count + 1;
    }   
    printf("Number of digits : %d", count);
    return 0;
}