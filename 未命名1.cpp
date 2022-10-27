#include<stdio.h>
main()
{
	float a,b;
	printf("输入一个实数：");
	scanf("%f",&a);
	if(a>=0)
	{
		b=a; 
	}
	else
	b=-a;
	printf("绝对值=%f",b);
	return 0;
}
