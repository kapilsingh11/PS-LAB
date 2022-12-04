#include <stdio.h>
int main()
{
    int left, right, i, k, x, flag = 1;
    printf("enter left and right: ");
    scanf("%d %d", &left, &right);
    for (i = left; i <= right; i++)
    {
        k = i;
        flag = 1;
        while (k != 0)
        {
            x = k % 10;
            if (x == 0)
            {
                flag=0;
                break;
            }

            else
            {

                if (i % x == 0)
                {
                    flag = 1;
                }
                if (i % x != 0)
                {
                    flag = 0;
                    break;
                }
            }
            k = k / 10;
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
}
