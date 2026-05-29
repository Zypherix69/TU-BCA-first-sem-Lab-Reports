#include<stdio.h>
void copy(){
    int a[5] = {10, 40, 20, 30, 50};
    int b[5];
    for(int i=0; i<5; i++)
       b[i] = a[i];
    printf("Copied Array : ");
    for(int i=0; i<5; i++) 
        printf("%d ", b[i]);
}
int main(){
    copy();
    return 0;
}