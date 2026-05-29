#include<stdio.h>
int main(){
    int matrix[2][2];
    int rows = 2;
    int cols = 2;
    int transpose[2][2];
    printf("Enter the Elments of 2X2 matrix : ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of Above Matrix is.....\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}