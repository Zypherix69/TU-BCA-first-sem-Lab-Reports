#include <stdio.h>
int main(){
    FILE *f = fopen("numbers.txt","w");
    if(f==NULL){ printf("Error"); return 1; }

    int arr[10] = {-2,-8,-99,-100,101,20,21,-9,1000,10};

    for(int i=0;i<10;i++)
        fprintf(f,"%d ",arr[i]);

    fclose(f);
    printf("Data written\n");
    return 0;
}