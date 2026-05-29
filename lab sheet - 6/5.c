#include<stdio.h>
void function(){
    int n;
    printf("Enter a Numeber : ");
    scanf("%d", &n);
    if(n % 2 == 0)
       printf("%d is an Even Number.", n);
    else if (n % 2 != 0)
       printf("%d is a Odd Number.", n);
    else
       printf("Neither Odd Nor Even.");
}
int main(){
    function();
    return 0;
}