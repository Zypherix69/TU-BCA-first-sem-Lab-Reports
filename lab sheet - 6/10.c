#include<stdio.h>
int greater(int a, int b){
    int result;
    if(a>b)
       result = a;
    else 
       result = b;
    return result;
}
int main(){
    int a, b;
    printf("Enter any two Numbers : ");
    scanf("%d %d", &a, &b);
    int c = greater(a, b);
    printf("%d is greater", c);
    return 0;
}