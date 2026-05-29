#include<stdio.h>
float avgeven(int a, int b){
    int i, sum = 0, count = 0;
    for(i = a; i<b; i++){
        if(i % 2 == 0 ){
           sum = sum + i;
           count++;
        }
    }
    if(count == 0)
       return 0;
    return (float)sum/count;
}
int main(){
    int a, b;
    printf("Enter any two Numbers: ");
    scanf("%d %d", &a, &b);
    float result = avgeven(a, b);
    printf("%.2f is the Required Answer.", result);
    return 0;
}
