#include<stdio.h>
int main(){
    int matrix[3] [3];
    int rows = 3;
    int cols = 3;
    int sum = 0;
    printf("Enter Elements of Matrix : ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum = sum + matrix[i][j];
        }
    }
    printf("Sum of all the Elements of the Matrix is %d", sum);
    return 0;
}