#include <stdio.h>

int main(){
    FILE *f = fopen("test.txt","w");
    if(f==NULL){ printf("Error"); return 1; }

    fprintf(f,"Welcome BCA program");
    printf("Data written to file successfully.\n"); 

    fclose(f);
    return 0;
}