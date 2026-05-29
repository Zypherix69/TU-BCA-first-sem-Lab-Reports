#include<stdio.h>
#include<string.h>

struct employee {
    char name[20];
    char add[20];
    int salary;
};

int main(){
    struct employee emp[3];
    int i; 

    for(i=0; i<3; i++){
        printf("Enter name of Employee %d : ", i+1);
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Enter Address of Employee %d : ", i+1);
        fgets(emp[i].add, sizeof(emp[i].add), stdin);
        emp[i].add[strcspn(emp[i].add, "\n")] = '\0';

        printf("Enter salary of Employee %d : ", i+1);
        scanf("%d", &emp[i].salary);
        getchar(); // <-- FIX: consume leftover newline
    }

    printf("\nEmployees Having salary above 10k : \n");
    printf("%-5s %-20s %-20s %-10s\n", "ID", "Name", "Address", "Salary");

    for(i=0; i<3; i++){
        if(emp[i].salary > 10000)
            printf("%-5d %-20s %-20s %-10d\n", i+1, emp[i].name, emp[i].add, emp[i].salary);
    }

    return 0;
}