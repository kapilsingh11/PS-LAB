#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k,x,l,m,i=0;
    scanf("%d %d %d",&a,&b,&k);
    x=pow(a,b);
    while (i<k)
    {
       l=x%10;
       x=x/10;
       i++; 
    }
    printf("%d",l);
    
}