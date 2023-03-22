#include<stdio.h>
int main()
{
	int n=0,w=0,y=0;
	printf("Input:");
	char p[20];
	gets(p);
    for(int i=0;p[i]!='\0';i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			n++;
		}
		else if(p[i]>='a' && p[i]<='z' )
		{
			w++;
		}
	}
	printf("数字个数=%d 小写字母个数=%d\n",n,w);
	
	return 0;
}

