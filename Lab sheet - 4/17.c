#include<stdio.h>
int main(){
    int m1[2][2];
    int m2[2][2];
    int sum[2][2];
    printf("Enter the Elements of First Matrix : ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the Elements of Second Matrix : ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &m2[i][j]);
        }
    }
        for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }    
    return 0;
}