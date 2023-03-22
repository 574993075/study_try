#include<stdio.h>

#define N 2

#define M 3

void printScore(float (*s)[M], int n);

 void  Aver(float (*s)[M], float *stuA, float *surA, int n, int m);

int main()

{ int i,j;

  float score[N][M]={{67.5, 86, 78},{80,90,85}}; //N个学生各M门课的成绩

  float stuAver[N]={0}; //N个学生的平均分

  float curAver[M] = {0};//M门课程的平均分

  printScore(score,N);

  Aver(score, stuAver, curAver, N, M);

  for(i=0; i<N; i++)

  {  printf("stu%d:%.1f\n", i+1, stuAver[i]);  }

  for(j=0; j<M; j++)

  {  printf("course%d:%.1f\n",j+1, curAver[j]);  }

}

void printScore(float(*s)[M], int n)

{  int i,j;

  printf("\tcourse1\tcourse2\tcourse3\n");

  for(i=0;i<n;i++)

  { printf("stu%d:\t",i+1) ;

    for(j=0;j<M;j++)

      printf("%.1f\t", s[i][j]);

    printf("\n");

  }

}

void  Aver(float (*s)[M], float *stuA, float *surA, int n, int m)

{
	float sumA=0,sumB=0,sum1=0,sum2=0,sum3=0;
	for(int i=0;i<3;i++)
	{
		sumA+=*(s[0]+i);
	}
	for(int j=3;j<6;j++)
	{
		sumB+=*(s[0]+j);
	}
	*stuA=sumA/3;
	*(stuA+1)=sumB/3;
	for(int k=0;k<2;k++)
	{
		sum1+=*(s[k]);
	}
	for(int l=0;l<2;l++)
	{
		sum2+=*(s[l]+1);
	}
	for(int m=0;m<2;m++)
	{
		sum3+=*(s[m]+2);
	}
    *surA=sum1/2;
    *(surA+1)=sum2/2;
    *(surA+2)=sum3/2;
}








