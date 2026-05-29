#include<stdio.h>
    int main(){
        int a, b, c, g;
        printf("Enter the first Number : ");
        scanf("%d", &a);
        printf("Enter the Second Number : ");
        scanf("%d", &b);
        printf("Enter the Third Number : ");
        scanf("%d", &c);
        g = (a>b) ? a:b; 
        g = (g>c) ? g:c;
        printf("%d is the greatest Number.", g);
    return 0;
      }
