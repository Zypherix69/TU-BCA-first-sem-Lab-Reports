#include <stdio.h>
int main(){
    FILE *f = fopen("a.txt","a");
    if(f==NULL){ printf("Error"); return 1; }

    char word[20];
    printf("Enter word: ");
    scanf("%s",word);

    if(word[0]=='a')
        fprintf(f,"%s\n",word);

    printf("Word written to file if it starts with 'a'.\n");


    fclose(f);
    return 0;
}