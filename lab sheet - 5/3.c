#include<stdio.h>
#include<string.h>

int main(){
    char txt[50];
    int len = 0, a = 0;

    fflush(stdin);

    printf("Enter text : ");
    fgets(txt, sizeof(txt), stdin);

    a = strlen(txt);
    if(txt[a - 1] == '\n'){
        txt[a - 1] = '\0';
    }

    while(txt[len] != '\0'){
        len++;
    }

    printf("The length of string : %d",len);
    
    return 0;
}