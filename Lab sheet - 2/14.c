#include<stdio.h>
    int main(){
        int m;
        printf("Enter the marks obtained : ");
        scanf("%d", &m);
        if( m>90 || m==90 )
           printf("Equivalent grade for %d marks is 'A'\n",m);
        else if( (m>70 && m<90) || m==70)
           printf("Equivalent Grade for %d marks is 'B'",m);
        else if( (m>60 && m<70) || m==60)
           printf("Equivalent Grade for %d marks is 'c'",m);
        else if ( (m>40 && m<60) || m==40)
           printf("Equivalent Grade for %d marks is 'D'",m);
        else
           printf("Invalid Input");
    return 0;
    }