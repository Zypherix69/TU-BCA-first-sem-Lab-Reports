#include <stdio.h>

struct s {
    int roll;
    char name[20], addr[20];
};

int main(){
    FILE *f = fopen("data.txt","w");
    if(f==NULL){ printf("Error"); return 1; }

    struct s x;

    for(int i=0;i<30;i++){
        scanf("%d %s %s",&x.roll,x.name,x.addr);
        fprintf(f,"%d %s %s\n",x.roll,x.name,x.addr);
    }

    fclose(f);
    return 0;
}