#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    float salary;
    char add[20];
};
int main(){
    struct employee e[3];
    int high=0,low=0;
    for(int i=0;i<3;i++){
        printf("Enter name of employee %d: ",i+1);
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter salary of employee %d: ",i+1);
        scanf("%f", &e[i].salary);
        getchar();

        printf("Enter address of employee %d: ",i+1);
        fgets(e[i].add, sizeof(e[i].add), stdin);
        e[i].add[strcspn(e[i].add, "\n")] = '\0';
    }
    for (int i = 1; i < 3; i++) {
        if (e[i].salary > e[high].salary) high = i;
        if (e[i].salary < e[low].salary)  low  = i;
    }
    printf("Employee with highest salary:\n");
    printf("Name: %s\n", e[high].name);
    printf("Salary: %.2f\n", e[high].salary);
    printf("Address: %s\n", e[high].add);

    printf("Employee with lowest salary:\n");
    printf("Name: %s\n", e[low].name);
    printf("Salary: %.2f\n", e[low].salary);
    printf("Address: %s\n", e[low].add);

    return 0;
}
