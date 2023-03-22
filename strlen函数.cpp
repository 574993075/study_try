#include<stdio.h>
int MyStrlen (const char str[]);
int My_Strlen(const char *p);
int main()
{
	char str[80];
	printf("Input the string:");
	gets(str);
	int num=MyStrlen(str);
	printf("String's number is:%d\n",num);
	char *a=NULL;
	a=str;
	int nun=My_Strlen(a);
	printf("String's number is:%d",nun);
	return 0;
}
int MyStrlen (const char str[])
{
	int len=0;
	for(int i=0;str[i]!='\0';i++)
	{
		len++;
	}
	
	return len;
}
int My_Strlen(const char *p)
{
	int len=0;
	for(;*p!='\0';p++)
	{
		len++;
	}
	return len;
}
