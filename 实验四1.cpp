#include<stdio.h>
main()
{
	int i;float c;
	printf("F\tC\n");
	for(i=0;i<=200;)
	{
		printf("%d\t",i);
		c=5*(i-32)/9.0;
		printf("%.1f\n",c);
		i=i+10;
	}
	return 0;
}
