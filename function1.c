#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    sum(n);
}
int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {

        s = s + i;
    }
    printf("sum is:%d ", s);
}
