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
    for(t=0; t<100000000; t++) ;   //��ѭ����Ϊ������ѭ��ʵ����ʱ
}
main()
{   int i;
    for(i=0; i<1000000; i++)   //����ѭ���ṹ������ʱ�����е�ʱ��
    {   Update();
        Display();
        Delay();
    }
    return 0;
}
