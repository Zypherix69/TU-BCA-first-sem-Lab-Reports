#include <stdio.h>
#include <string.h>

int main()
{
    char txt[50];
    int i = 0, count = 0;

    fflush(stdin);

    printf("Enter any sentence : ");
    fgets(txt, sizeof(txt), stdin);

    strlwr(txt);

    while (txt[i] != '\0')
    {
        if (txt[i] == ' ')
        {
            count++;
        }
        i++;
    }

    printf("Number of white space : %d", count);

    return 0;
}