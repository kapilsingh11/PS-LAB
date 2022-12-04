#include <stdio.h>
int main()
{
    int A[5][5] = {0}, i, j, r = 0, c = 2, tr, tc, n = 1;
    A[0][2] = 1;
    tr = r, tc = c;
    while (n != 25)
    {
        tr = tr - 1;
        if (tr < 0)
        {
            tr = 4;
        }
        tc = tc + 1;
        if (tc > 4)
        {
            tc = 0;
        }
        n = n + 1;
        if (A[r][c] == 0)
        {
            A[tr][tc] = n;
            r = tr;
            c = tc;
        }
        else
        {
            r = r + 1;
            A[r][c] = n;
            tr = r;
            tc = c;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}