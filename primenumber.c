#include <stdint.h>
int prime(int a);
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d", &a);
    prime(a);
}
int prime(int a)
{
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("not prime number");
    }
    else
    {
        printf("prime number");
    }
}