#include <stdio.h>
#include <math.h>
int main()
{
    int T = 1, N, S = 0, I = 1, P;
    printf("enter the number : ");
    scanf("%d", &N);
    if (T != 0)
    {
        P = pow(5, I);
        T = N / P;
        S = S + T;
        I++;
    }
    printf("%d", S);
}