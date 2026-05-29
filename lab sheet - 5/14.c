#include <stdio.h>
#include <string.h>

int main()
{
    char ch, temp[2];
    char vowels[5] = {'a','e','i','o','u'};
    int i, isVowel = 0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert single character to lowercase using strlwr
    temp[0] = ch;
    temp[1] = '\0';
    strlwr(temp);
    ch = temp[0];

    // Check if it is a letter
    if(ch >= 'a' && ch <= 'z')
    {
        for(i = 0; i < 5; i++)
        {
            if(ch == vowels[i])
            {
                isVowel = 1;
                break;
            }
        }

        if(isVowel)
            printf("It is vowel\n");
        else
            printf("It is consonant\n");
    }
    else
    {
        printf("Not a letter\n");
    }

    return 0;
}