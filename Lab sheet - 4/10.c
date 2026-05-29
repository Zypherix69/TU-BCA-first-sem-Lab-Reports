#include<stdio.h>
int main(){
    int arr[100];
    int i, count = 0;
     
    printf("Enter ages of 100 people  : ");
    for(i=0; i<100; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<100; i++){
        if(arr[i]>=16 && arr[i]<=20)
           count++;
    }
    printf("Number of People Between 16 to 20 is %d", count);
return 0;
}