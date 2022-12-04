#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    fact(n);
}
int fact(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {

        s = s * i;
    }
    printf("fact is:%d ", s);
}
