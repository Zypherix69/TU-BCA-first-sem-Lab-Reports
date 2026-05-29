#include<stdio.h>
void sort(){
    int i, j, t, n;
    printf("How many Numbers : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d Numbers  : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Numbers in Ascending Order.\n");
    for(i=0; i<n; i++)
        printf("%d", a[i]);
}
int main(){
    sort();
    return 0;
}