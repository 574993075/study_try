#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("In put n:");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		int p=1,l=1;
		p=pow(i,2);
		l=pow(i,3);
		printf("ƽ��=%4d",p);
		printf("����=%4d\n",l);
	}
	return 0;
}
