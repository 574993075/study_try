#include<stdio.h>
#include<math.h>
int main()
{
	int r,bai,shi,ge;
	printf("Input r:");
	scanf("%d",&r);
	bai=fabs(r)/100;
	shi=fabs(r)/10-10*bai;
	ge=(int)fabs(r)%100-10*shi;
	printf("��λ=%d\n",bai);
	printf("ʮλ=%d\n",shi);
	printf("��λ=%d\n",ge);
	return 0;
	
}
