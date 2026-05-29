#include<stdio.h>
int main(){
    int arr[65];
    int i, j, t;

    printf("Enter the marks obtained by 65 studebts : ");
    for(i=0; i<65; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<65; i++){
        for(j=i+1; j<65; j++){
            if(arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Highest = %d\n", arr[64]);
    printf("Lowest = %d", arr[0]);
return 0;
}