#include<stdio.h>
int main()
{
int i,fibo[20];   
    fibo[0] = 1;
    fibo[1] = 1;                                 
    for(i =2; i< 20 ; i++)
        fibo[i]=fibo[i-1]+fibo[i-2];                                     
    printf("Fibonacci���е�ǰ20��:\n");
    for(i = 0 ; i< 20 ; i++)
    {print("%10d",fibo[i]);                                           
           if((i+1)%4==0)
		   printf("\n");                                      
}
 return 0;
}
