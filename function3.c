#include <stdio.h>
int power(int a, int n);
int main()
{
    int a, n;

    printf("enter any number: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &n);
    power(a, n);
}
int power(int a, int n)
{
    int x=1;
    for (int i = 1; i <= n; i++)
    {
        x=a*x;
    }
    printf("%d",x);
}