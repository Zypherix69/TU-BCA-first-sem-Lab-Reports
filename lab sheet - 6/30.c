#include<stdio.h>
#include<math.h>
int power(int x, int y){
    return (int)pow(x,y);
}
int main(){
    int x, y;
    printf("Enter x and Y : ");
    scanf("%d %d", &x, &y);
    int output = power(x, y);
    printf("%d ^ %d = %d", x, y, output);
    return 0;
}
