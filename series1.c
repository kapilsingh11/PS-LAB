#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    float sum = 0;
    printf("enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + (1.0 / i);
    }
    printf("%f", sum);
}