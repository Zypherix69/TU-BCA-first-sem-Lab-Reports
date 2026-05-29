#include<stdio.h>
int main(){
    int i, x = 0;
    for(i=1; i<=100; i++){
       if(i%2 != 0)
          x = x + i;
    }
    printf("%d ", x);
    return 0;
}