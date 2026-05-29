#include <stdio.h>
#include <string.h>

int main()
{
    char txt[50];
    int len;

    fflush(stdin);

    printf("Enter a string: ");
    fgets(txt, sizeof(txt), stdin);

    // Remove newline if present
    txt[strcspn(txt, "\n")] = '\0';

    len = strlen(txt);

    if(strcmp(txt, "hello") == 0)
    {
        printf("Hello! How are you?\n");
    }
    else if(len > 5)
    {
        printf("This string has more than 5 characters\n");
    }
    else
    {
        printf("This is not what I wanted\n");
    }

    return 0;
}