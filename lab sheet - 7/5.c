#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    char post[20];
    int salary;
};
int main(){
    int i, found = 0;
    struct employee emp[3];

    for(i=0; i<3; i++){
        printf("Enter Name of Employee %d : ", i+1);
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Enter Post of Employee %d : ", i+1);
        fgets(emp[i].post, sizeof(emp[i].post), stdin);
        emp[i].post[strcspn(emp[i].post, "\n")]  = '\0';

        printf("Enter salary of employee %d : ", i+1);
        scanf("%d", &emp[i].salary);
        getchar();
    }
    printf("\nEmployees with salary greater than 15000:\n");
    printf("%-5s %-20s %-20s %-10s\n", "ID", "Name", "Post", "Salary");
    for(i=0; i<3; i++){
        if(emp[i].salary > 15000){
        printf("%-5d %-20s %-20s %-10d\n", i+1, emp[i].name ,emp[i].post, emp[i].salary);
        found = 1;
        }
    }
    if(found == 0)
       printf("No employees found with salary greater than 15000.\n");
    return 0;
}