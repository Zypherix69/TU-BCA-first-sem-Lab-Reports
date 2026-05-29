#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s) {
    printf("\nRoll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
    printf("Grade : %s\n", s.marks >= 90 ? "A" :
                            s.marks >= 75 ? "B" :
                            s.marks >= 60 ? "C" : "F");
}

int main(void) {
    struct Student s;

    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    getchar();

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}