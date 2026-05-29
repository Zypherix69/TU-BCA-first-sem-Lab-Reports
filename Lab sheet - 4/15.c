#include<stdio.h>
int main(){
    int matrix[3][4];
    int rows = 3;
    int cols = 4;
    int sum = 0;
    printf("Enter Elements for 3X4 matrix : ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] % 2 == 0){
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of Even Elements is %d", sum);
    return 0;
}