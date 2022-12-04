#include<stdio.h>
int main()
{
    int i,n,fib;
    
    for ( i = 1; i <=6; i++)
    {
        int fibNm=(i-1)+(i-2);
        printf("%d",fibNm);
    }
    return 0;
}