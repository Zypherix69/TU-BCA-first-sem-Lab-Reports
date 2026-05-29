#include<stdio.h>
int main(){
    int y;
    for(y=1900; y<=2000; y++){
        if(y % 400 == 0)
           printf("%d ", y);
        else if(y % 4 == 0 && y % 100 != 0)
           printf("%d ", y);      
    }
    return 0;
}