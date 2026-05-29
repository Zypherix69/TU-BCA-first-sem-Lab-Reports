#include <stdio.h>

int main(){
    FILE *f = fopen("file.txt","w+");
    if(f==NULL){ printf("Error"); return 1; }

    fprintf(f,"I love Nepal");

    rewind(f);

    char ch;
    while((ch=fgetc(f))!=EOF)
        putchar(ch);

    fclose(f);
    return 0;
}