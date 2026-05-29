#include <stdio.h>
#include <string.h>

struct student {
    char name[20], addr[20];
    int age;
};

int main(){
    FILE *f = fopen("student.txt","r");
    if(f==NULL){ printf("Error"); return 1; }

    struct student s;

    while(fscanf(f,"%s %d %s",s.name,&s.age,s.addr)!=EOF){
        if(strcmp(s.addr,"Pokhara")==0)
            printf("%s\n",s.name);
    }

    fclose(f);
    return 0;
}