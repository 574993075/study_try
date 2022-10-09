#include<stdio.h>
#include<math.h>
main(void)
{
	int n; float rate,capital;double deposit;
	printf("Input capital=\n") ;
	printf("      n=\n");
	scanf("%f%d",&capital,&n);
	rate=0.0225;
	deposit=capital*pow((1+rate),n);
	printf("deposit=%f",deposit);
	return 0;
}
