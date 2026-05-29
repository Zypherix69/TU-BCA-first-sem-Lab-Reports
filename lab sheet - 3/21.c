#include<stdio.h>
int main(){
    int i, a;
    for( i=1; i<=10 ;i++){
        for(a=1; a<=10; a++){
            printf("%d X %d = %d\t", i, a, i*a );
        }
        printf("\n");
    }
    return 0;
}