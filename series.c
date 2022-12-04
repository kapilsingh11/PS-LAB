#include <stdio.h>
int main()
{
    int n, i, sum = 0,fact=1,sign=1;
    printf("enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact=fact*i;
        sum = sum + sign* fact;
        sign=sign*-1;
    }
    printf("%d", sum);
}