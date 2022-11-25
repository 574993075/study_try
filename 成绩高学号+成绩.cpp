#include<stdio.h>
int ID(int a[][2],int n);
int HIGH(int b[][2],int m);
int main()
{   printf("Input student¡¯s ID and score:");
	int i,j,num[6][2];
	for(i=0;i<6;i++)
		{ 
		 for(j=0;j<2;j++)
		 {
		 scanf("%ld%d",&num[i][0],&num[i][1]);if(num[i][0]<0||num[i][1<0])
	     break;
	     } 
	    }
		printf("Total students are %d\n""The highest is:%ld, %d\n",5,ID(num,i),HIGH(num,i));
	    return 0;
}
int ID(int a[][2],int n)
{   int high=a[0][1];
	for(int i=0;i<n;i++)
	if(a[i][1]>high)
	high=a[i][0];
	return high;
}
int HIGH(int b[][2],int m)
{   int high=b[0][1];
	for(int i=0;i<m;i++)
	if(b[i][1]>high)
	high=b[i][1];
	return high;
}
