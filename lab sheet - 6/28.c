#include<stdio.h>
int power(int x, int y){
    if(y == 0)         
        return 1;
    return x * power(x, y - 1);  
}
int main(){
    int x, y;
    printf("Enter base x and exponent y: ");
    scanf("%d %d", &x, &y);
    if(y < 0){
        printf("This program handles only non-negative exponents.\n");
        return 1;
    }
    int result = power(x, y);
    printf("%d ^ %d = %d\n", x, y, result);
    return 0;
}