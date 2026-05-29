#include<stdio.h>                                                                      
int main(){
    int i, x, a;
    for(i=3; i<=100; i++){
        a=0;
       for(x=2; x<i; x++){
          if(i % x == 0){
            a = 1;
            break;
          }
       }
       if(a==0)
         printf("%d ",i);
    }
    return 0;
}

