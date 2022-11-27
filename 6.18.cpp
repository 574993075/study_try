//#include<stdio.h>
////int main()
//{  
//	printf("1  2  3  4  5  6  7  8  9\n");
//	printf("-  -  -  -  -  -  -  -  -\n");
//	for(int i=1;i<10;i++)
//	{
//		for(int n=1;n<10;n++)
//		{
//			printf("%-2d ",i*n);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("1  2  3  4  5  6  7  8  9\n");
//	printf("-  -  -  -  -  -  -  -  -\n");
//	for(int i=1;i<10;i++)
//	{
//		for(int n=1;n<i+1;n++)
//		{
//			printf("%-2d ",i*n);
//		}
//		printf("\n");
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	printf("1  2  3  4  5  6  7  8  9\n");
	printf("-  -  -  -  -  -  -  -  -\n");
	for(int i=1;i<10;i++)
	{
		for(int m=1;m<i;m++)
		{
			printf("   ");
		}
		for(int n=i;i-1<n&&n<10;n++)
		{
			printf("%-2d ",i*n);
		}
		printf("\n");
    }
    	return 0;
}















