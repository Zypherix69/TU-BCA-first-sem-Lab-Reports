#include<stdio.h>
#include<math.h>
int raise(int a, int b){
    int c = pow(a,b);
    return c;
}
int main(){
    int a, b;
    printf("Enter a base Y and Power X : ");
    scanf("%d %d", &a, &b);
    int result = raise(a, b);
    printf("%d ^ %d = %d", a, b, result);
    return 0;
}