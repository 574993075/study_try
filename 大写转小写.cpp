#include<stdio.h>
main()
{
	char t,zhi;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:");
	scanf("%c",&t);
	if (t>='A'&&t<='Z')
     {
     	zhi=t+32;   	
		printf("%c\n",zhi);
		printf("%d\n",zhi);
	 }
	else if (t>='a'&&t<='z')
	{
		printf("%c\n",t-32);
		printf("%d\n",t-32);
	}
	else
	printf("%c",t);
	return 0;
}
