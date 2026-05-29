#include<Stdio.h>
void fact(){
    int n, fact = 1;
    printf("Enter a Number  : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        fact = fact * i;
    printf("%d! = %d", n, fact);
}
int main(){
    fact();
    return 0;
}