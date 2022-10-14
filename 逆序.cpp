#include<stdio.h>
main()
{
	int a,b;
	printf("Please input a three digit number:");
	scanf("%d",&a);
	b=a%10*100+a/10%10*10+a/100;
	printf("The reverse number is %d\n",b);
	
}
