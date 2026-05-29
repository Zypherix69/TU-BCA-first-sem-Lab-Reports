#include<stdio.h>
int main(){
    int a, choice;
    printf("Enter a Number : ");
    scanf("%d", &a);
    printf("Enter 1 to find if its odd or even.\n");
    printf("Enter 2 to find if its +ve or -ve.\n");
    printf("Enter you choice : ");
    scanf("%d", &choice);
    printf("--------------------output----------------------\n");
    switch(choice) {
        case 1: {
            if(a%2==0)
              printf("%d is a Even Number.",a);
            else if(a%2!=0)
              printf("%d is an Odd Number.",a);
            else
              printf("0 is neither odd nor even.");
        }
        break;
        case 2: {
            if(a<0)
              printf("%d is a Negative Number.",a);
            else if(a>0)
            printf("%d is a Positive number.",a);
            else
            printf("you've just entered 0 Dumbass");
        }   
        break;
    }
return 0;
}