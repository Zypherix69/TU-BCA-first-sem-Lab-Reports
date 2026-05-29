#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int id;
    char name[50];
    struct Date dob;
};

int main() {
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);
    getchar();

    printf("Enter Name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = '\0';

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);

    printf("\nID   : %d\n", e.id);
    printf("Name : %s\n", e.name);
    printf("DOB  : %02d/%02d/%04d\n", e.dob.day, e.dob.month, e.dob.year);
}