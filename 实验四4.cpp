#include<stdio.h>
main()
{
	int a,b=0;
    do
	{
		printf("����һ��������");
		scanf("%d",&a);
		b+=a;
		printf("�����ܺ�=%d\n",b);
	}while(a!=0);
	return 0;

}
