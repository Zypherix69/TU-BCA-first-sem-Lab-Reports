#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char txt[100];
    int i = 0;

    printf("Enter any sentence: ");
    fgets(txt, sizeof(txt), stdin);

    while (txt[i] != '\0')
    {
        if (txt[i] >= 'a' && txt[i] <= 'z')
            printf("%c", toupper(txt[i]));
        else if (txt[i] >= 'A' && txt[i] <= 'Z')
            printf("%c", tolower(txt[i]));
        else
            printf("%c", txt[i]);
        i++;
    }

    return 0;
}