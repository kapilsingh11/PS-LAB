#include <stdio.h>
int p(int n);
int main()
{
    int n, sum;
    printf("enter any number:  ");
    scanf("%d", &n);
    p(n);
}
int p(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("yes it is perfect number");
    }
    else
    {
        printf("no it is not perfect number");
    }
}
