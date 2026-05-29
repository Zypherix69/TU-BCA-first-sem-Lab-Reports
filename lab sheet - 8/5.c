#include <stdio.h>
#include <string.h>

struct emp {
    char name[20], office[20], occ[20];
    int id;
};

int main(){
    FILE *f = fopen("employee.dat","r");
    if(f==NULL){ printf("Error"); return 1; }

    struct emp e;

    while(fscanf(f,"%s %d %s %s",e.name,&e.id,e.office,e.occ)!=EOF){
        if(strcmp(e.office,"NepalBank")==0 && strcmp(e.occ,"Manager")==0)
            printf("%s\n",e.name);
    }

    fclose(f);
    return 0;
}