#include<stdio.h>
int main(){
    int i, n, sum = 0;
    float avg;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1){
        sum = sum + i;
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
    return 0;
}