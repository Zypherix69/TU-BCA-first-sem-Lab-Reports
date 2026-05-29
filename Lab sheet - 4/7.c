#include<stdio.h>
int main(){
    int arr[20];
    int n, i, j, t;

    printf("Enter the Number of people you want to Enter details about (max = 20) : ");
    scanf("%d", &n);

    printf("Enter the Ages of %d Peoples : ", n);
    for(i=0; i<n; i++)
       scanf("%d", &arr[i]);

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("youngest = %d\n",arr[0]);
    printf("Oldest = %d", arr[n-1]);
return 0;
}