#include<stdio.h>
int main(){
    int arr[100];
    int i, j, t, n;

    printf("Enter the Number of numbers you need to find descending order for(max = 100) : ");
    scanf("%d", &n);
     
    printf("Enter %d Numbers : ",n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Numbers in Ascending Order : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
return 0;
}