#include<stdio.h>
int main(){
    int a[3], b[3], c[3];
    int i;
    
    printf("Enter 3 elements of 1st array : ");
    for(i=0; i<3; i++)
       scanf("%d", &a[i]);

    printf("Enter 3 elements of 2nd array : ");
    for(i=0; i<3; i++)
       scanf("%d", &b[i]);

    for(i=0; i<3; i++) 
       c[i]= a[i] + b[i];

    for(i=0; i<3; i++)
       printf("%d ", c[i]);
return 0;       
}