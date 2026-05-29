#include<stdio.h>
    int main(){
        int ID, U;
        char N [20];
        float bill, surcharge;

        printf("Enter Name : ");
        gets(N);

        printf("Enter Customer ID : ");
        scanf("%d", &ID);

        printf("Enter the unit consumed : ");
        scanf("%d", &U);

        if (U<200)
            bill = U * 1.2;
        else if(U<400)
            bill = U*1.5;
        else if(U<600)
            bill = U*1.8;
        else 
            bill = U*2;

        if (bill>400)
            bill = bill*1.15;

        if(bill<100)
          bill = 100;
        
        printf("Customer ID : %d\n", ID);
        puts(N);
        printf("Units Consumed : %d\n",U);
        printf("Total bill : %.2f\n", bill);
    return 0;
    }