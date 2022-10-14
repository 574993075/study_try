#include<stdio.h>
#define PI 3.1415926
main()
{
  float r,v;
   printf("Please input the radius of the ball:");
   scanf("%f",&r);
   v=4*r*r*r*PI/3;
   printf("Volume  of the ball is%.2f .\n",v);
}
