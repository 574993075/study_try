#include<stdio.h>
main()
{
	printf("1000以内能同时被4和6整除的数及其数量\n");
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
