#include<stdio.h>
   int main(){
    int py,pm,pd;
    int by,bm,bd;
    int y,m,d;
    printf("Enter present year,present month,present day");
    scanf("%d%d%d", &py, &pm, &pd);
	printf("enter birth year, birth month, birth day");
	scanf("%d%d%d",&by,&bm,&bd);  
	y=py-by;
	m=pm-bm;
	d=pd-bd;  
    if (d<0)
	{
    	d=d+30;
    	m=m-1;
	}
	if (m<0)
	{
		m=m+12;
		y=y-1;
	}
       printf("age is %d year,%d month,%d day",y,m,d);
       return 0;
}
