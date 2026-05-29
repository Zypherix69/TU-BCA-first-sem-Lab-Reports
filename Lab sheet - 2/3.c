#include<stdio.h>
    int main(){
        int cp ,sp;
        printf("Enter Cost Price of the Product : ");
        scanf("%d",&cp);
        printf("Enter Selling Price of the Product : ");
        scanf("%d",&sp);
        if (cp > sp)
          printf("you're in Loss.");
        else
          printf("congrats you made some profit.");
    return 0;
    }