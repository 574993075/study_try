#include<stdio.h>
main()
{
	char ch;
	int count=0;
	printf("input characters:");
	while((ch=getchar())!='\n')
	{
		if(ch>='0'&&ch<='9')
		count++;
		else continue;
	}
	printf("count of digit characters:%d",count);
	return 0;
}
