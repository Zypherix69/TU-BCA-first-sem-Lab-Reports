#include <stdio.h>
#include <string.h>

int main()
{
    char txt[200];
    char vowels[5] = {'a','e','i','o','u'};
    int i = 0, len;
    int alphabets = 0, vowelCount = 0, consonants = 0, digits = 0, spaces = 0, special = 0;
    int j, isVowel;

    printf("Enter a line of text: ");
    fgets(txt, sizeof(txt), stdin);

    // Remove newline if present
    txt[strcspn(txt, "\n")] = '\0';

    len = strlen(txt);

    while(i < len)
    {
        char ch = txt[i];

        // Convert uppercase to lowercase manually for vowel check
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Count alphabets
        if((ch >= 'a' && ch <= 'z') || (txt[i] >= 'A' && txt[i] <= 'Z'))
        {
            alphabets++;

            // Check if vowel
            isVowel = 0;
            for(j = 0; j < 5; j++)
            {
                if(ch == vowels[j])
                {
                    vowelCount++;
                    isVowel = 1;
                    break;
                }
            }

            if(!isVowel)
                consonants++;
        }
        // Count digits
        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
        // Count spaces
        else if(ch == ' ')
        {
            spaces++;
        }
        // Count special characters
        else
        {
            special++;
        }

        i++;
    }

    printf("\nNumber of alphabets: %d\n", alphabets);
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of special characters: %d\n", special);

    return 0;
}