#include<stdio.h>
main()
{
	float a,b;
	printf("����һ��ʵ����");
	scanf("%f",&a);
	if(a>=0)
	{
		b=a; 
	}
	else
	b=-a;
	printf("����ֵ=%f",b);
	return 0;
}
