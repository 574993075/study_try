#include<stdio.h>
main()
{
	printf("1000������ͬʱ��4��6����������������\n");
	int a,i;
	for(a=12,i=1;a<=1000;a++)
	{
		if(a%4==0&&a%6==0)
		{
			printf("%d\t",a);
		    i++;
		    printf("%d\n",i);
		}
	}
}
