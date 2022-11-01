#include<stdio.h>
main()
{
	int a,b=1,c=1;
	printf("输入一个正整数:");
	scanf("%d",&a);
	while(b<=a)
	{
		c*=b;
	    b++;
	}
	printf("%d\!=%d",a,c);
	return 0;
}
