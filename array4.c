#include<stdio.h>
int main(){
    int A[5],i,j,sum=0;
    for ( i = 0; i <=4; i++)
    {
        scanf("%d",&A[i]);
    }
    for ( j = 0; j<=4; j++)
    {
        sum=sum+A[j];
    }
    printf("%d\n",sum);
    return 0;
}