#include<stdio.h>
#include<math.h>
main()
{
	float ben,li,he;int nian;
	printf("��Ǯ=");
	scanf("%f",&ben);
	printf("����=");
	scanf("%d",&nian);
    switch(nian)
    {
	case 1:
    li=2.25e-2;
    break;
    case 2:
    li=2.43e-2;
    break;
    default:
    li=0;
    }
    he=ben*pow((1+li),nian);
    printf("��Ϣ�ӱ���=%f",he);
	
}
