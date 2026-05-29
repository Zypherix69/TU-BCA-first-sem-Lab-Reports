#include<stdio.h>
int main(){
    int n, i, cube;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        cube = i*i*i;
        if(cube % 3 == 0)
           printf("%d  ", cube);
    }
    return 0;
}