#include <stdio.h>
int main()
{
    int i, j, k, n;

    for (i = 1; i <= 5;i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for ( j = 1;j < i*2; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
