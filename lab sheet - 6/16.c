#include<stdio.h>
void sort(){
    int a[10], t;
    printf("Enter any 10 numbers  : ");
    for(int i=0; i<10; i++)
       scanf("%d", &a[i]);
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Numbers in Ascending Order.\n");
    for(int i=0; i<10; i++)
        printf("%d ", a[i]);
}
int main(){
    sort();
    return 0;
}