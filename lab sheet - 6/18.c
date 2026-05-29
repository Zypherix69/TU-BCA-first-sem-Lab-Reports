#include<stdio.h>
void age(){
    int i, n, a[25], count = 0;
    printf("Enter ages of 25 people : ");
    for(i=0; i<25; i++)
        scanf("%d", &a[i]);
    for(i=0; i<25; i++){
        if(a[i] > 50)
           count++;
    }
    printf("There are %d people above the age of 50.", count);
}
int main(){
    age();
    return 0;
}