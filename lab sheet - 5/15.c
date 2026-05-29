#include <stdio.h>
#include <string.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
        printf("It is digit\n");
    else
        printf("ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}