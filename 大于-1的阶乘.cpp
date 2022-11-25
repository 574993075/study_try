#include <stdio.h>

#define END  -1     

long    Factorial( int  x);   

main()  

{   int   x;

    while  (1)     

    {   printf("input x:"); 

        scanf("%d" ,&x);    

        if (x <= END)     

        break;        

        else            

            printf ("%d! = %d\n" , x, Factorial(x)); 

    }   

}

 long  Factorial(int  x)

{    

    int   i;

    long   result=1; 

    for (i=1;i<=x;i++)
        result *= i; 
	return result;
}
 
