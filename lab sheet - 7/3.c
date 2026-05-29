#include<stdio.h>
#include<string.h>
int main(){
    struct employee {
        int id;
        char name[20];
        char post[20];
        int salary;
    };
    struct employee emp;

    printf("Enter ID NO. of the Employee : ");
    scanf("%d", &emp.id);
    getchar();

    printf("Enter Name of the Employee : ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';  
    
    printf("Enter Post of the Employee : ");
    fgets(emp.post, sizeof(emp.post), stdin);
    emp.post[strcspn(emp.post, "\n")] = '\0';

    printf("Enter salary of the employee : ");
    scanf("%d", &emp.salary);

    printf("\n Employee Details : \n");
    printf("%-5d %-20s %-20s %-10d", emp.id, emp.name, emp.post, emp.salary);

    return 0;
}