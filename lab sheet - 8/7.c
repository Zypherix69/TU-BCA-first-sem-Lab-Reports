#include <stdio.h>

struct book {
    char title[20], author[20];
    int pages;
    float price;
};

int main(){
    FILE *f = fopen("booklist.dat","w+");
    if(f==NULL){ printf("Error"); return 1; }

    struct book b[13];

    printf("Enter 13 books:\n");
    for(int i=0;i<13;i++)
        scanf("%s %s %d %f",b[i].title,b[i].author,&b[i].pages,&b[i].price);

    fwrite(b,sizeof(b),1,f);

    rewind(f);
    fread(b,sizeof(b),1,f);

    printf("Selected books:\n");
    for(int i=2;i<11;i++)
        printf("%s\n",b[i].title);

    fclose(f);
    return 0;
}