#include<stdio.h>
#include<ctype.h>
void lowercase(){
    char upr[20], lwr[20];
    printf("Enter a string : ");
    fgets(upr, sizeof(upr), stdin);
    for(int i=0; i<20; i++)
        lwr[i] = tolower(upr[i]);
    printf("%s", lwr);
}
int main(){
    lowercase();
    return 0;
}