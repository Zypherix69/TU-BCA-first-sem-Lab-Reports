#include<stdio.h>
int main(){

    int numbers[20], i, x = 0;

    printf("Enter ages of 20 people : ");
    for(i=0; i<20; i++){
       scanf("%d", &numbers[i]);
       if(numbers[i]>=50 && numbers[i]<=60)
          x = x+1;
    }      
    printf("%d people are between the age of 50 - 60.",x);
    return 0;
}
  
