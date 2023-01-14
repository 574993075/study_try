#include<stdio.h>
#define N 10
void Input(int a[N][N],int n);
int SUM(int a[N][N],int n);
int main()
{
	int a[N][N],n,sum;
	printf("Input n=");
	scanf("%d",&n);
	Input(a,n);
	sum=SUM(a,n);
	printf("%d",sum);
	return 0;
}
void Input(int a[N][N],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int SUM(int a[N][N],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i||j+i==n-1)
			sum+=a[i][j];
		}
	}
    return sum;
}
