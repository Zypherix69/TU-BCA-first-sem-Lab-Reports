#include <stdio.h>

int main() {
    int A[2][3], B[3][2], C[2][2];
    printf("Enter elements of 2x3 matrix A : ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of 3x2 matrix B : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j] = 0;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resulting 2x2 matrix C:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}