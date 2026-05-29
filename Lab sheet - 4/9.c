#include<stdio.h>
int main(){
    int arr[200];
    int i, t, n, count = 0;
    
    printf("Enter the Number of Employees : ");
    scanf("%d", &n);

    printf("Enter salary of %d emplyees : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<n; i++){
        if(arr[i] > 20000){
            count++;
        }
    }
    printf("Number of Employees above the salary of 20k is : %d", count);
return 0;
}