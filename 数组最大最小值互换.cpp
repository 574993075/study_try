#include<stdio.h>
#define N 10
void Read(int a[N]);
void Sort(int a[N]);
int Max(int a[N]);
int Min(int a[N]);
void Swap(int a[]);
main()
{
	int a[N]; 
	Read(a);
	printf("\n");
   	printf("最大值=%d", Max(a));
    printf("\n");
    printf("最小值=%d",Min(a));
    printf("\n");
    Swap(a);
    for(int l=0;l<N;l++)
    {
    	printf("%d ",a[l]);
	}
	return 0;
}
void Read(int a[])
{
	printf("请输入10个数字:");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("输入的10个数：");
	for(int c=0;c<N;c++)
	{
		printf("%d ",a[c]);
	}
}
int Max(int a[])
{
	int M;
	Sort(a);
	M=a[0];

	return M;
}
void Sort(int a[])
{
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int z=0;
				z=a[j];
				a[j]=a[j+1];
				a[j+1]=z;
			}
		}
	}
}
int Min(int a[])
{
	int r;
	Sort(a);
	r=a[9];
	
	return r;
}
void Swap(int a[])
{
	for(int i=0;i<N;i++)
	{
		if(a[i]==Max(a))
		{
			for(int j=0;j<N;j++)
			{
				if(a[j]==Min(a))
				{
					int z=0;
					z=a[i];
					a[i]=a[j];
					a[j]=z;
				}
				continue;
			}
		}
		continue;
	}
}




