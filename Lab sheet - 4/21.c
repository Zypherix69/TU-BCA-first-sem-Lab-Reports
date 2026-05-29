#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if(c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j] = 0;
        }
    }

    // Multiply matrices using sum variable for clarity
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum = 0; // temporary sum for C[i][j]
            for(int k=0;k<c1;k++){  // c1 == r2
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Print result
    printf("Resulting matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}