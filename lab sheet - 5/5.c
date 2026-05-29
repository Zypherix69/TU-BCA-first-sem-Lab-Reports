#include<stdio.h>
#include<string.h>

int main(){
    char txt[50];
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int i =0, j, count = 0;

    fflush(stdin);

    printf("Enter any sentence : ");
    fgets(txt, sizeof(txt), stdin);

    strlwr(txt);
    
    while(txt[i] != '\0'){
        for(j = 0; j < 5; j++){
            if(txt[i] == vowels[j]){
                count++;
                break;
            }
        }
        i++;
    }

    printf("Number of vowels : %d",count);
    
    return 0;
}