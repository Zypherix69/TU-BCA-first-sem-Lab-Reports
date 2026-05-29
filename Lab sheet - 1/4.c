#include<stdio.h>
   int main(){
     int f,c;
     printf("Enter Temperature in Fahrenheit scale : ");
     scanf("%d", &f);
     printf("%d fahrenheit is %d celcius",f,c=(5/9)*(f-32) );

   }