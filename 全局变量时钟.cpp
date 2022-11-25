#include<stdio.h>
int  hour, minute, second;
void Update()
{    second ++;
   if(60==second)
   {   second=0;
       minute ++;
   }
    if(minute==60)
   {   minute = 0;
       hour ++;
    }
    if(24==hour)
      {
	  hour=0;
      }
}
void Display()
{   printf("%2d:%2d:%2d\n",hour,minute,second);    }
void  Delay()
{   int t;
    for(t=0; t<100000000; t++) ;   //用循环体为空语句的循环实现延时
}
main()
{   int i;
    for(i=0; i<1000000; i++)   //利用循环结构，控制时钟运行的时间
    {   Update();
        Display();
        Delay();
    }
    return 0;
}
