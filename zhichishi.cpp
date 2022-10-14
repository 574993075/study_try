#include<stdio.h>
main()
{
	printf("Enter a character:");
	char chi,zhi,shi;
	chi=getchar();
	zhi=chi-1;
	shi=chi+1;
	printf("Enter a character:%c\n",chi);
	printf("%c\t%c\t%c\n",zhi,chi,shi);
	printf("%d\t%d\t%d",zhi,chi,shi);
	return 0;
}
