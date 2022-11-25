#include<stdio.h>
int sort(int num[], int n) ;
int main()
{
	int num[40],i=0;
	do
	{   printf("Input score:");
    	scanf("%d",&num[i]);
    	if(num[i]<0||i>40)
    	break;
        i++;	
	}while(1);
	printf("Total students are %d\n",i);
	printf("Sorted scores:");
	for(int n=0;n<i;n++)
	{
		printf("%d  ",sort(num,n));
	}
	return 0;
}
int sort(int num[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[j] > num[i]) 
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
}
