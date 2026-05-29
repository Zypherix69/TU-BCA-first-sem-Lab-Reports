#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int len = 0;

    fflush(stdin);

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

    printf("Uppercase : %s\n", strupr(name));
    printf("Lowercase : %s\n", strlwr(name));
    printf("Reverse : %s", strrev(name));

    return 0;
}