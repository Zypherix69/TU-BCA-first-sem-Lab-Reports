#include <stdio.h>
#include <string.h>

struct Employee { 
    int id; 
    char name[50]; 
    char position[50]; };

int main() {
    struct Employee e[100], t;
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nID: ");
        scanf("%d", &e[i].id);
        getchar();

        printf("Name: ");      
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Position: ");  
        fgets(e[i].position, sizeof(e[i].position), stdin);
        e[i].position[strcspn(e[i].position, "\n")] = '\0';

    }
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (strcmp(e[j].name, e[j+1].name) > 0) { 
                t=e[j]; 
                e[j]=e[j+1]; 
                e[j+1]=t; 
            }

    printf("\nID     Name                  Position\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-6d %-22s %s\n", e[i].id, e[i].name, e[i].position);
}