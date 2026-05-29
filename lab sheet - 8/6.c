#include <stdio.h>

int main(){
    int x;
    FILE *odd=fopen("odd.txt","w");
    FILE *even=fopen("even.txt","w");

    if(odd==NULL || even==NULL){ printf("Error"); return 1; }

    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&x);
        if(x%2==0) fprintf(even,"%d ",x);
        else fprintf(odd,"%d ",x);
    }

    fclose(odd); fclose(even);

    char ch;

    printf("\nOdd:\n");
    odd=fopen("odd.txt","r");
    while((ch=fgetc(odd))!=EOF) putchar(ch);
    fclose(odd);

    printf("\nEven:\n");
    even=fopen("even.txt","r");
    while((ch=fgetc(even))!=EOF) putchar(ch);
    fclose(even);

    return 0;
}