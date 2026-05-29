#include <stdio.h>

int main(){
    FILE *f = fopen("myfile.dat","w");
    if(f==NULL){ printf("Error"); return 1; }

    fprintf(f,"Rishi");
    fclose(f);

    rename("myfile.dat","myfile1.dat");
    printf("File renamed successfully\n");

    return 0;
}