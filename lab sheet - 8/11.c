#include <stdio.h>

int main(){
    FILE *f = fopen("data.txt","r");
    if(f==NULL){ printf("Error"); return 1; }

    int roll;
    char name[20], addr[20];

    while(fscanf(f,"%d %s %s",&roll,name,addr)!=EOF)
        printf("%d %s %s\n",roll,name,addr);

    fclose(f);
    return 0;
}