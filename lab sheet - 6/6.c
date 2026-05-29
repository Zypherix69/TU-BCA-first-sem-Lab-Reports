#include<Stdio.h>
int getArea(int l, int b){
    int area = l*b;
    return area;
}
int main(){
    int l, b;
    printf("Enter length and breadth : ");
    scanf("%d %d", &l, &b);
    int result = getArea(l, b);
    printf("Area Of Rectangle = %d", result);
    return 0;
}