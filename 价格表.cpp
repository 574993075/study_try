#include<stdio.h>
main()
{
	int Enteritemnumber,yy,mm,dd;float Enterunitprice;
	printf("Enter item number:\n");
	scanf("%d",&Enteritemnumber);
	printf("Enter unit price:\n");
	scanf("%f",&Enterunitprice);
	printf("Enter purchase date (yy mm dd):");
	scanf("%d%d%d",&yy,&mm,&dd);
    printf("Item\t");
    printf(" Unit\t");
    printf("   Purchase\n");
    printf("%-9d$%-9.2f%02d/%02d/%02d\n",Enteritemnumber,Enterunitprice,mm,dd,yy);
}
