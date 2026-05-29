#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    char vowels[5] = {'a','e','i','o','u'};
    int choice, i, isVowel;

    fflush(stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nChoose an operation:\n");
    printf("1. Check Vowel or Consonant\n");
    printf("2. Convert to Uppercase\n");
    printf("3. Convert to Lowercase\n");
    printf("4. Display ASCII value\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            ch = tolower(ch); // convert input to lowercase
            isVowel = 0;
            for(i = 0; i < 5; i++)
            {
                if(ch == vowels[i])
                {
                    isVowel = 1;
                    break;
                }
            }

            if(isVowel)
                printf("%c is a vowel\n", ch);
            else if(ch >= 'a' && ch <= 'z')
                printf("%c is a consonant\n", ch);
            else
                printf("%c is not an alphabet\n", ch);
            break;

        case 2:
            printf("Uppercase: %c\n", toupper(ch));
            break;

        case 3:
            printf("Lowercase: %c\n", tolower(ch));
            break;

        case 4:
            printf("ASCII value of %c: %d\n", ch, ch);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}