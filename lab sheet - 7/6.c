#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[30];
    char address[50];
    int marks;
};

int main() {
    struct student s[35];
    int i, found = 0;

    for(i = 0; i < 35; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);
        getchar(); 

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; 

        printf("Address: ");
        fgets(s[i].address, sizeof(s[i].address), stdin);
        s[i].address[strcspn(s[i].address, "\n")] = '\0'; 

        printf("Marks: ");
        scanf("%d", &s[i].marks);
        getchar(); 
    }

    printf("\nStudents with marks greater than 250:\n");
    printf("%-5s %-20s %-25s %-10s\n", "Roll", "Name", "Address", "Marks");

    for(i = 0; i < 35; i++) {
        if(s[i].marks > 250) {
            printf("%-5d %-20s %-25s %-10d\n",
                   s[i].roll,
                   s[i].name,
                   s[i].address,
                   s[i].marks);
            found = 1;
        }
    }

    if(!found) {
        printf("No student found with marks greater than 250.\n");
    }

    return 0;
}