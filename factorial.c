#include<stdio.h>
int main()
{
    int fact=1 ,n ,i ;
    printf("enter any number: ");
    scanf("%d",&n);

    for (  i = 1; i <=n; i++)
    {
        fact=fact*i;
        
    }
    printf("fact is %d \n",fact);
    return 0;
}