#include<stdio.h>
int MAX(int shu[]);
int MIN(int zu[]);
int POSX(int a[]);
int POSN(int b[]);
int main()
{
	int num[10],max,min,i=0,posx=0,posn=0;
	printf("In put number:");
do	{
    scanf("%d",&num[i]);
    i++;
	}while(i<10);
	max=MAX(num);min=MIN(num);posx=POSX(num);posn=POSN(num);
	printf("max=%d, pos=%d\n" "min=%d, pos=%d\n",max,posx,min,posn);
	return 0;
}
int MAX(int shu[])
{   int max;
    max=shu[0];
	for(int i=1;i<10;i++)
	{
	if(shu[i]>max)
	max=shu[i];
    }
	return max;
}
int POSX(int a[])
{   int max,posx=0,i=0,m=0;
    max=a[i];
	for( i=1;i<10;i++)
	{
	if(a[i]>max)
	{
	max=a[i];
    m=i;
	}
	posx=m;
    }
	return posx;
}
int MIN(int zu[])
{   int min;
    min=zu[0];
	for(int i=1;i<10;i++)
	{
	if(zu[i]<min)
	min=zu[i];
    }
	return min;
}
int POSN(int b[])
{   int min,posn=0,i=0,n=0;
    min=b[i];
	for( i=1;i<10;i++)
	{
	if(b[i]<min)
	{
	min=b[i];
	n=i;
	}
	posn=n;
    }
	return posn;
}
