#include<stdio.h>
#include<string.h>
struct employee {
    int age;
    char name[20];
};
int main(){
    struct employee emp[3];
    int i, sum = 0;
    for(i=0; i<3; i++){
        printf("Enter Name of employee %d  : ", i+1);
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Enter age of Employee %d : ", i+1);
        scanf("%d", &emp[i].age);
        getchar();
    }
    printf("\n=============Employee Details==============\n");
    printf("%-5s %-20s %-5s\n", "ID", "Name", "Age");
    printf("--------------------------------------------\n");

    for(i=0; i<3; i++){
        printf("%-5d %-20s %-5d\n", i+1, emp[i].name, emp[i].age);
    }
    for(i=0; i<3; i++){
        sum = sum + emp[i].age;
    }
    printf("\n Average age : %.1f", (float)sum/3);
    return 0;
}