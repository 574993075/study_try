#include <stdio.h>
#define N 40
int GetAboveAver(int score[], int n);
int main()
{   printf("Input score:");     
    int score[N], m, n;
    n = -1;      
    do{          
        n++;
        scanf("%d", &score[n]);
    }while (score[n] >= 0); 
    m = GetAboveAver(score, n);   
    printf("Students of above average is %d\n", m);
}        
int GetAboveAver(int score[], int n)
{        
    int   i, sum,  aver,count;
    count = 0;
    sum = 0;   
    for (i=0; i<n; i++)
    {        
        sum += score[i];
    }
    aver=sum/n;
    for (i=0; i<n; i++)
    {        
        if (score[i] >= aver)
            count++;
    }
    printf("Total number %d\n",n);
    return count-1;
}  
