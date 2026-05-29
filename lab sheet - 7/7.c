#include <stdio.h>
#include <string.h>

struct Student { 
    int roll; 
    char name[50]; 
    float perc; };

int main() {
    struct Student s[100], t;
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Roll No: "); 
        scanf("%d", &s[i].roll);
        getchar();

        printf("Name: ");    
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Percentage: "); 
        scanf("%f", &s[i].perc);
        getchar();
    }
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (s[j].perc < s[j+1].perc){ 
                t=s[j]; 
                s[j]=s[j+1]; 
                s[j+1]=t; 
            }

    printf("\nRank  Roll  Name                  Percentage\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-5d %-5d %-22s %.2f%%\n", i+1, s[i].roll, s[i].name, s[i].perc);
}