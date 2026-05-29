#include<stdio.h>
int main(){
    int MyArray[14], i, sum = 0;
    printf("Enter any 15 Numbers : ");
    for(i=0; i<15; i++)
       scanf("%d", &MyArray[i]);
    for(i=0; i<15; i++)
       sum = sum + MyArray[i];
    float avg = sum/15;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
return 0;
}