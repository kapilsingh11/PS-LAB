#include<stdio.h>
int fib(int n);
int main()
{
  printf("%d",fib(12));
  return 0;
}
int fib(int n){
    if (n==0)
    {
        return 0;
    }
    
    if (n==1)
    {
        return 1;
    }
    
    int fibNm=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm2+fibNm;
   
    return fibN;
}