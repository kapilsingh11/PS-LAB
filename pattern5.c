#include<stdio.h>
int main(){
    int i,j,n,k=65;
    scanf("%d",&n);
    k=k+n-1;
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <=i; j++)
       {
         printf("%c ",k-j+1);
       }
       printf("\n");
       
    }
    
}