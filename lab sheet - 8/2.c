#include <stdio.h>
int main(){
    FILE *f = fopen("Two_Rupees.txt","w");
    if(f==NULL){ printf("Error"); return 1; }

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    fprintf(f,"%d %d",a,b);
    printf("Numbers written to file successfully.\n");

    fclose(f);
    return 0;
}