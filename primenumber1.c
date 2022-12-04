#include <stdint.h>
int prime(int a);
int main()
{
    int a;
    printf("enter any range: ");
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
        if (prime(i)==1)
        {
            printf("%d ",i);
        }
        
    }
    
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
        return 0;
    }
    else
    {
       return 1;
    }
}