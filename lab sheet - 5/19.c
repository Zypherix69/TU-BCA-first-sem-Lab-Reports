#include <stdio.h>
#include <string.h>

int main()
{
    char str[8][10] = {"jump", "walk", "red", "green", "talk", "move", "look", "feel"};
    char temp[10];
    int i, j;

    // Sort strings in ascending order
    for(i = 0; i < 8 - 1; i++)
    {
        for(j = i + 1; j < 8; j++)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Print sorted strings
    printf("Strings in ascending order:\n");
    for(i = 0; i < 8; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}