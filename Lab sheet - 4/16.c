#include<stdio.h>
int main(){
    int matrix[4][4];
    int rows = 4;
    int cols = 4;
    int sum = 0;
    printf("Enter Elements for 4X4 matrix : ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i == j){
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of Diagonal Elements is %d", sum);
    return 0;
}