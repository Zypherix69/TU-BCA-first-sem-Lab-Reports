#include <stdio.h>

struct student {
    int roll, grade;
    char name[20], addr[20];
};

int main(){
    FILE *f = fopen("student.txt","w+");
    if(f==NULL){ printf("Error"); return 1; }

    struct student s[15];

    for(int i=0;i<15;i++)
        scanf("%d %s %s %d",&s[i].roll,s[i].name,s[i].addr,&s[i].grade);

    printf("Grade 10 students:\n");
    for(int i=0;i<15;i++)
        if(s[i].grade==10)
            printf("%s\n",s[i].name);

    fwrite(s,sizeof(s),1,f);

    rewind(f);
    fread(s,sizeof(s),1,f);

    printf("\nAll students:\n");
    for(int i=0;i<15;i++)
        printf("%s\n",s[i].name);

    fclose(f);
    return 0;
}