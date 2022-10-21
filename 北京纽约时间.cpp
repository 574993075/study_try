#include<stdio.h>
main()
{
	int hh,mm,a,b,c;
	printf("Irish time(hh:mm):");
	scanf("%2d:%2d",&hh,&mm);
	a=hh-5,b=hh+3,c=hh+7;
	if(hh>0&&hh<=5)
	{
	printf("Irish time(hh:mm):%d:%d\n",hh,mm); 
	printf("Washington:%2d:%2d\n",a+24,mm);
	printf("Moscow:%2d:%2d\n",b,mm);
	printf("Beijing:%2d:%2d",c,mm);
    }
    else if(hh>5&&hh<=17)
    {
    printf("Irish time(hh:mm):%d:%d\n",hh,mm); 
	printf("Washington:%2d:%2d\n",a,mm);
	printf("Moscow:%2d:%2d\n",b,mm);
	printf("Beijing:%2d:%2d",c,mm);
	}
	else if(hh>17&&hh<=21)
	{
	printf("Irish time(hh:mm):%d:%d\n",hh,mm); 
	printf("Washington:%2d:%2d\n",a,mm);
	printf("Moscow:%2d:%2d\n",b,mm);
	printf("Beijing:%2d:%2d",c-24,mm);
	}
	else if(hh>21&&hh<=24)
	{
	printf("Irish time(hh:mm):%d:%d\n",hh,mm); 
	printf("Washington:%2d:%2d\n",a,mm);
	printf("Moscow:%2d:%2d\n",b-24,mm);
	printf("Beijing:%2d:%2d",c-24,mm);
	}
	else
	printf("´íÎó");
}
