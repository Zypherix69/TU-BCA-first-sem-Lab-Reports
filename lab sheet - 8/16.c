#include <stdio.h>

int main(){
    int ch;
    char data[50];
    FILE *f;

    do{
        printf("\n1.Append\n2.Read\n3.Delete\n4.Exit\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                f=fopen("file.txt","a");
                if(f==NULL){ printf("Error"); break; }
                printf("Enter text: ");
                scanf("%s",data);
                fprintf(f,"%s\n",data);
                fclose(f);
                printf("Data appended to file\n");
                break;

            case 2:
                f=fopen("file.txt","r");
                if(f==NULL){ printf("Error"); break; }
                while(fgets(data,50,f))
                    printf("%s",data);
                fclose(f);
                printf("File read successfully\n");
                break;

            case 3:
                remove("file.txt");
                printf("File deleted\n");
                break;
        }

    }while(ch!=4);

    return 0;
}