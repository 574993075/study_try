#include<stdio.h>
#define N 5 
void Read(int a[N]);
void Swap(int a[],int b[]);
main()
{
	int arr[N],brr[N];
	Read(arr);
	Read(brr);
	Swap(arr,brr);
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
		printf("%d ",brr[i]);
	}
	return 0;
}
void Read(int a[N])
{
	printf("ÊäÈë5¸öÊý£º");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
}
void Swap(int a[],int b[])
{
	for(int i=0,s=0;i<N;i++)
	{
		s=a[i];
		a[i]=b[i];
		b[i]=s;
	}
}

