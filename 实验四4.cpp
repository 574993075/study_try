#include<stdio.h>
main()
{
	int a,b=0;
    do
	{
		printf("输入一个整数：");
		scanf("%d",&a);
		b+=a;
		printf("以上总和=%d\n",b);
	}while(a!=0);
	return 0;

}
