#include<stdio.h>
int main()
{
    int sum=0 ,n ,i ,j;
    printf("enter any number: ");
    scanf("%d",&n);

//     for (  i = 1, j=n; i <=n && j>=1; i++,j--)
//     {
//         sum=sum+i;
//         printf("%d \n",j);
//     }
//     printf("sum is %d \n",sum);
//     return 0;
// }
    for ( j = n; j >= 1; j--)
    {
        sum=sum+j;
        printf("%d \n",j);
    }
    printf("sum is %d",sum);
}