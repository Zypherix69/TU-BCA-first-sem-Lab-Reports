#include<stdio.h>
    int main(){
        float C;
        printf("Enter Temperature in Centigrade Scale : ");
        scanf("%f", &C);
        if(C<0)
          printf("Freezing wheather");
        else if( (C>0 && C<10) || C==10)
          printf("Very cold wheather");
        else if( (C>10 && C<20) || C==20)
          printf("Cold wheather");
        else if( (C>20 && C<30) || C==30)
          printf("Normal Temperatur");
        else if( (C>30 && C<40) || C==40 )
          printf("It's Hot");
        else 
          printf("Very Hot");
    return 0;
    }