#include<stdio.h>
#include<string.h>

int main(){
    char txt[50];
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int i =0, j, count = 0, isVowel;

    fflush(stdin);

    printf("Enter any sentence : ");
    fgets(txt, sizeof(txt), stdin);

    strlwr(txt);
    
    while(txt[i] != '\0'){
        if(txt[i] >= 'a' && txt[i] <= 'z'){
            isVowel = 0;
            for(j =0; j < 5; j++){
                if(txt[i] == vowels[j]){
                    isVowel = 1;
                    break;
                }
            }
            if(!isVowel)
                count++;
        }
        i++;
    }

    printf("Number of consonants : %d",count);
    
    return 0;
}