#include <stdio.h>
#include <string.h>

int main()
{
    char txt[100];
    char cleaned[100];
    int i = 0, j = 0, len;
    int isPalindrome = 1;

    fflush(stdin);

    printf("Enter any sentence: ");
    fgets(txt, sizeof(txt), stdin);

    len = strlen(txt);
    if(txt[len - 1] == '\n')
        txt[len - 1] = '\0';

    strlwr(txt);  

    while(txt[i] != '\0')
    {
        if(txt[i] != ' ')
        {
            cleaned[j++] = txt[i];
        }
        i++;
    }
    cleaned[j] = '\0';

    i = 0;
    j = strlen(cleaned) - 1;

    while(i < j)
    {
        if(cleaned[i] != cleaned[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        printf("The sentence is a palindrome.\n");
    else
        printf("The sentence is not a palindrome.\n");

    return 0;
}