#include<stdio.h>
#include<conio.h>
    int main(){

        char name [20], gender;
        float maths, phy, chem, comp, nep, tm;
        float P;

        printf("Enter name of the student : ");
        gets(name);

        printf("Enter M for male and F for female : ");
        scanf("%c",&gender);

        printf("Marks obtained in Maths : ");
        scanf("%f", &maths);
        printf("marks obtained in physics : ");
        scanf("%f", &phy);
        printf("Marks obtained in chemistry : ");
        scanf("%f", &chem);
        printf("Marks obtained in computer : ");
        scanf("%f", &comp);
        printf("Marks obtained in Nepali : ");
        scanf("%f", &nep);

        puts(name);

        if(gender == 'm' || gender == 'M')
        printf("Male \n");
        else if (gender == 'f' || gender == 'F')
        printf("Female \n");
        else
        printf("Invalid Input \n");
        
        tm = maths + phy + chem + comp + nep ;
        P = (tm/500) * 100 ;

        printf("percentage : %.2f%% \n ",P);
    }