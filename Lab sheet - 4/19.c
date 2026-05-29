#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &r, &c);
    int m1[r][c], m2[r][c];
    int equal = 1;
    printf("Enter elements of first matrix : ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of second matrix : ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(m1[i][j] != m2[i][j]){
                equal = 0;
                break;
            }
        }
        if(equal == 0 ) break;
    }
    if(equal == 1)
        printf("The Given Matrices are Equal.");
    else
        printf("The Given Matrices are not Equal.");
return 0;
}