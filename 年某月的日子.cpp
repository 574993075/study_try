#include<stdio.h>
int main()
{
	int year,month,day;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	do{
		printf("Input year,month:");
		scanf("%d,%d",&year,&month);
		if(month<1||month>12)
       	{
       		printf("Invalid data!\n");continue;
		   }
		else if(year%4==0&&year%100!=0&&month==2)
		day=29;
		else
		day=days[month-1];
		printf("The number of days is %d\n",day);
		}while(1);
	return 0;
}

