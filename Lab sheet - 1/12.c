#include <stdio.h>

int main() {
    int py, pm, pd;       
    int by, bm, bd;       
    int y, m, d;        
    int mdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter present date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &py, &pm, &pd);
    printf("Enter birth date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &by, &bm, &bd);

    y = py - by;
    m = pm - bm;
    d = pd - bd;

    if(d < 0) {
        int pr_month = pm - 1;
        if(pr_month == 0) pr_month = 12;     
        d = d + mdays[pr_month - 1];            
        m = m - 1;                                
    }
    if(m < 0) {
        m = m + 12;
        y = y - 1;
    }

    printf("Your age is: %d years, %d months, %d days\n", y, m, d);

    return 0;
}
