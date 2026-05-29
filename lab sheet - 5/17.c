#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int choice, i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline

    printf("\nChoose an operation:\n");
    printf("1. Display larger of the two strings\n");
    printf("2. Display both strings in reverse\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(strlen(str1) > strlen(str2))
                printf("Larger string: %s\n", str1);
            else if(strlen(str2) > strlen(str1))
                printf("Larger string: %s\n", str2);
            else
                printf("Both strings are of equal length\n");
            break;

        case 2:
            printf("First string reversed: ");
            for(i = strlen(str1) - 1; i >= 0; i--)
                printf("%c", str1[i]);
            printf("\n");

            printf("Second string reversed: ");
            for(i = strlen(str2) - 1; i >= 0; i--)
                printf("%c", str2[i]);
            printf("\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}