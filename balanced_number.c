#include <stdio.h>
int count(int n);
int balanced_number(int A, int n);
int main()
{
    int a, n;
    printf("enter the number: ");
    scanf("%d", &n);
    a = count(n);
    balanced_number(a, n);
}
int count(int n)
{
    int c = 0;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    return c;
}
int balanced_number(int A,int n)
{
    int i, k1, s1 = 0, s2 = 0;
    for (i = 0; i < A / 2; i++)
    {
        k1 = n % 10;
        n = n / 10;
        s1 = s1 + k1;
    }
    n = n / 10;
    for (i = 0; i < A / 2; i++)
    {
        k1 = n % 10;
        n = n / 10;
        s2 = s2 + k1;
    }
    if (s1 == s2)
    {
        printf("balanced number");
    }
    else
    {
        printf("unbalanced number");
    }
}