#include <stdio.h>
struct student { char name[20]; int age; char addr[20]; };

int main(){
    FILE *f = fopen("student.txt","a");
    if(f==NULL){ printf("Error"); return 1; }

    struct student s;

    printf("Enter name age address: ");
    scanf("%s %d %s",s.name,&s.age,s.addr);

    fprintf(f,"%s %d %s\n",s.name,s.age,s.addr);
    printf("Data saved to file successfully.\n");

    fclose(f);
    return 0;
}