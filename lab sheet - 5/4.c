#include<stdio.h>
#include<string.h>

int main(){
    char txt[50];
    int i =0, len = 0;

    fflush(stdin);

    printf("Enter 3 word : ");
    fgets(txt, sizeof(txt), stdin);

    len = strlen(txt);
    if(txt[len - 1] == '\n'){
        txt[len - 1] = '\0';
    }

    while(txt[i] != '\0'){
        if(txt[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c",txt[i]);
        }

        i++;
    }
    
    return 0;
}