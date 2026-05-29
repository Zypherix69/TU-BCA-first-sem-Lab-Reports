#include<stdio.h>
void printHello(int n){
    if(n == 0)   
        return;
    printf("Hello\n");
    printHello(n - 1);  
}
int main(){
    int n;

    printf("Enter the number of times to print Hello: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Please enter a positive number.\n");
        return 1;
    }
    printHello(n);  
    return 0;
}