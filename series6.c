#include <stdio.h>
int main()
{
    int n, i, fact= 1,x,sign=1;
    float sum = 0,p=1.0;
    printf("enter number: ");
    scanf("%d", &n);
    printf("enter x: ");
    scanf("%d",&x);
    for (i = 1; i <= n; i++)
    {
        p=p*x;
        fact=fact*i;
        sum = sum + ((p/ fact)*sign);
        sign=sign*-1;
    }
    printf("%f", sum);
}