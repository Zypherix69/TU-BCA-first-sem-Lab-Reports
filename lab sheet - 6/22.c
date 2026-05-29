#include<stdio.h>
int even(int a, int b){
    for(int i=a; i<b; i++){
        if(i%2==0)
           printf("%d ", i);
    } 
}
int main(){
    int a, b;
    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    even(a, b);
    return 0;
}