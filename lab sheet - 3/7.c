#include<stdio.h>
int main(){
    int n, a=0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(int i=2; i<n; i++){
       if(n%i==0){
       a=1;
       break;
       }
    }
    if(n==1)
      printf("1 is Neither prime nor Composite.");
    else if(a==0)
      printf("%d is a Prime Number.", n);
    else
      printf("%d is Not a Prime Number", n);
    return 0;
}