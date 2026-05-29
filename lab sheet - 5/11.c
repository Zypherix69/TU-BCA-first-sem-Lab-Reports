#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], temp[50];

    fflush(stdin);

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Swap strings
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}