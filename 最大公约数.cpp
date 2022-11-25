#include<stdio.h>
int Gcd(int a,int b);
int main()
{
	int a,b;
	printf("输入一个整数：");
	scanf("%2d",&a);
    printf("输入一个整数：");
	scanf("%2d",&b);
    printf("最大公约数=%d",Gcd(a,b));
	return 0;
}
int Gcd(int a,int b)
{
	int i,c;
	if(a<0||b<0)
	{
	i=-1;
	return i;
    }
	else if(a>=b)
	{
		c=b;
	}
	else
	{
		c=a;
	}
	do
	{
		if(a%c==0&&b%c==0)
		{
		i=c;
		break;}
		c--;
	}while(1);
	return i;
}
