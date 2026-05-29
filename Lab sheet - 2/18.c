#include<stdio.h>
int main(){
   int a, b, input;
   float div;

   printf("Enter two Numbers : ");
   scanf("%d %d", &a, &b);

   printf("Enter 1 to Add\n");
   printf("Enter 2 to Substract\n");
   printf("Enter 3 to multiply\n");
   printf("Enter 4 to divide\n");
   printf("Your choice : ");
   scanf("%d", &input);
    
   switch(input) {
     case 1:
     printf("%d + %d = %d",a, b, a+b);
     break;
     case 2:
     printf("%d - %d = %d", a, b, a-b);
     break;
     case 3:
     printf("%d * %d =  %d", a, b, a*b);
     break;
     case 4: 
     div = (float)a/b;
     printf("%d / %d = %.2f", a, b, div);
     break;
   }
   return 0;
}