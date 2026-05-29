#include<stdio.h>
int main(){
    int arr[10];
    int i, j, t;
     
    printf("Enter any 10 Numbers : ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Numbers in Ascending Order : ");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
return 0;
}