#include<stdio.h>
int main(){
    int arr[10] = {1, 4, 4, 3, 7, 9, 0, 9, 5, 6};
    int key, i, count = 0;

    printf("Enter a Number to search : ");
    scanf("%d", &key);

    for(i=1; i<10; i++){
       if(arr[i] == key){
          printf("Key Found at Index : %d\n",i);
          count = count + 1;
       }  
    }      

    if(count > 0)
       printf("Frequency = %d", count);
    else
       printf("key is Not Found.");
return 0;
}
