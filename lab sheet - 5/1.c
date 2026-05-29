#include<stdio.h>
#include<string.h>

int main(){
    char str[25];
    int len = 0;

    fflush(stdin);

    printf("Enter any word : ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Length of string : %d",len);
    
    return 0;
}