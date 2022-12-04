#include <stdio.h>
int main()
{
    int A[5][6] = {0, 1, 0}, i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 6; j++)
        {
            A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (A[i][j] != 0)
            {
                printf("%d", A[i][j]);
            }
        }
        printf("\n");
    }
}   
