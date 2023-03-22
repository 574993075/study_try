#include <stdio.h>
#define N 2
#define M 3
void Transpose(int(*p)[M],int(*s)[N],int x,int y);
void Output(int (*q)[N],int x,int y);
int main()

{   int i,j;
    int a[N][M] = {1,2,3,4,5,6}, b[M][N];
	Transpose(a,b,N,M);
	Output(b,M,N);
}
void Transpose(int(*p)[M],int(*s)[N],int x,int y)
{
    for(int i=0;i<x;i++)
    {
    	for(int j=0;j<y;j++)
    	{
    		*(*(s+j)+i)=*(*(p+i)+j);
		}
	} 
}
void Output(int (*q)[N],int x,int y)
{
    for(int i=0;i<x;i++)
    {
    	for(int j=0;j<y;j++)
    	{
    		printf("%d",*(*(q+i)+j));
		}
		printf("\n");
	}
}


    
