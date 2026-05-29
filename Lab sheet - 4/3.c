#include<stdio.h>
int main(){
    int a[10], i;
    int even[10], odd[10];
    
    printf("Enter 10 elements of an Array : ");
    for(i=0; i<10; i++)
       scanf("%d", &a[i]);
    
    printf("Even = ");
    for(i=0; i<10; i++){
        if(a[i]%2 == 0)
          printf("%d ", a[i]);
    }
    printf("\n");
    printf("Odd = ");
    for(i=0; i<10; i++){
       if(a[i]%2 != 0)
          printf("%d ",a[i]);
    }
return 0;     
} 