#include<stdio.h>
# define N 30 
int Read(int a[],int b[]);
void All_Aver(int a[],int b[],int n);
void (*p)(int a[],int b[],int n);
void Hsort (int a[],int b[],int n);
void Lsort (int a[],int b[],int n);
void Nsort (int a[],int b[],int n);
void Serch (int a[],int b[],int n);
void Percent(int a[],int b[],int n);
void Out (int a[],int b[],int n);
main()
{
	int n,choose,stu[N],score[N];
	printf("1. Input record \n2. Calculate total and average score of course \n3. Sort in descending order by score \n4. Sort in asending order by score \n5. Sort in ascending order by number\n6. Search by number \n7. Statistic analysis \n8. List record \n0. Exit Please enter your choice");
	do
    {
    		printf("\n***************************");
    	printf("\nInput number:");
    	scanf("%d",&choose);
    	switch(choose)
    	{
    		case 1:	n=Read(stu,score);break;
	        case 2: p=All_Aver;(*p)(stu,score,n);break;
	        case 3: p=Hsort;(*p)(stu,score,n);break;
	        case 4: p=Lsort;(*p)(stu,score,n);break;
	        case 5: p=Nsort;(*p)(stu,score,n);break;
	        case 6: p=Serch;(*p)(stu,score,n);break;
	        case 7: p=Percent;(*p)(stu,score,n);break;
	        case 8: p=Out;(*p)(stu,score,n);break;
		}
	}while(choose>=0&&choose<=9);
	
	return 0;
}
int Read(int a[],int b[])
{
	int i=0;
    for( ;i<N;i++)
    {
    	int x,y;
    	printf("������ѧ��ѧ�źͳɼ�(����-1����)��");
    	scanf("%d %d",&x,&y);
    	if(x==-1||y==-1)
    	{break;}
		else
			a[i]=x;
			b[i]=y;
	}
	return i;
}
void All_Aver(int a[],int b[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=b[i];
	}
	printf("�γ��ܷ�Ϊ%d\n",sum);
	printf("�γ�ƽ����Ϊ%.2f",(float)sum/n);
}
void Hsort (int a[],int b[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				int x,y;
				y=b[j];
				b[j]=b[j+1];
				b[j+1]=y;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("\n���ɼ��ɸߵ������α�:");
	for(int m=0;m<n;m++)
	{
		printf("\n���Σ�%d ѧ�ţ�%d �ɼ�: %d",m+1,a[m],b[m]);
	}
}

void Lsort (int a[],int b[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				int x,y;
				y=b[j];
				b[j]=b[j+1];
				b[j+1]=y;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("\n���ɼ��ɵ͵������α�:");
	for(int m=0;m<n;m++)
	{
		printf("\n���Σ�%d ѧ�ţ�%d �ɼ�: %d",n-m,a[m],b[m]);
	}
}
void Nsort (int a[],int b[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int x,y;
				y=b[j];
				b[j]=b[j+1];
				b[j+1]=y;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("\n��ѧ���ɵ͵������α�:");
	for(int m=0;m<n;m++)
	{
		printf("\nѧ�ţ�%d �ɼ�: %d",a[m],b[m]);
	}
}
void Serch (int a[],int b[],int n)
{   
    int num;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				int x,y;
				y=b[j];
				b[j]=b[j+1];
				b[j+1]=y;
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("��������ҵ�ѧ�ţ�");
	scanf("%d",&num);
	for(int m;m<n;m++)
	{
		if(a[m]==num)
		{
			printf("��ѧ������Ϊ%d �ɼ�Ϊ%d",m+1,b[m]);break;
		}
	}
}
void Percent(int a[],int b[],int n)
{
	int y=0,l=0,z=0,j=0,bu=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]>=0&&b[i]<=59)
		{
			bu++;
		}
		else if(b[i]>=60&&b[i]<=69)
		{
			j++;
		}
		else if(b[i]>=70&&b[i]<=79)
		{
			z++;
		}
		else if(b[i]>=80&&b[i]<=89)
		{
			l++;
		}
		else if(b[i]>=90&&b[i]<=100)
		{
			y++;
		}
	}
	printf("���������%d��,ռ%.2f%%",y,(float)y/n*100);
	printf("\n���õ�����%d��,ռ%.2f%%",l,(float)l/n*100);
	printf("\n�еȵ�����%d��,ռ%.2f%%",z,(float)z/n*100);
	printf("\n���������%d��,ռ%.2f%%",j,(float)j/n*100);
	printf("\n�����������%d��,ռ%.2f%%",bu,(float)bu/n*100);
}
void Out (int a[],int b[],int n)
{
    int sum;
	for(int i=0;i<n;i++)
	{
		printf("\nѧ�ţ�%d �ɼ�:%d",a[i],b[i]);
		sum+=b[i];
	}
	printf("\n�γ��ܷ�Ϊ��%d\n�γ�ƽ����Ϊ:%.2f",sum,(float)sum/n);
}








