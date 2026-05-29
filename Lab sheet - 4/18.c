#include<stdio.h>
int main(){
    int r, c;
    printf("Enter the Number of Rows and Columns : ");
    scanf("%d %d",&r, &c );
    int m1[r][c];
    int m2[r][c];
    int sum[r][c];
    printf("Enter Elements for First Matrix : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the Elements for Second : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}