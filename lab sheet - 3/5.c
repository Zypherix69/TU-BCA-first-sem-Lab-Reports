#include<stdio.h>
int main(){
    int i, x, y, ans = 1;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        ans = ans*x;
    }
    printf("%d ^ %d = %d", x, y, ans);
    return 0;
}
