#include<stdio.h>
main()
{
	float x,y;
	printf("x=");
	scanf("%f",&x);
	if(x<1)
	{
		y=x*1.0;
		
	}
	else if (x>=1&&x<10)
	{
	y=2*x-1.0;
    }
    else
    y=3*x-11.0;
    printf("y=%f\n",y);
    return 0;
}
