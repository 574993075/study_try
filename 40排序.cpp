#include <stdio.h>
#define N 40
int ReadScore(int score[]);          
void sort(int score[], int n);  
void PrintScore(int score[], int n); 
int main()
{
    int score[N], n;
    n = ReadScore(score);     
    printf("Total students are %d\n", n);
    sort(score, n);        
    printf("Sorted scores:");
    PrintScore(score, n);    
    return 0;
}

int ReadScore(int score[])     
{
    int i = -1; 
    do
    {
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    }
    while (score[i] >= 0);    
    return i;                  
}
void sort(int score[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (score[j] > score[i]) 
            {
                temp = score[j];
                score[j] = score[i];
                score[i] = temp;
            }
        }
    }
}

void PrintScore(int score[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", score[i]);
    }
    printf("\n");
}
