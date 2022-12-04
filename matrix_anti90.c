#include<stdio.h>
int main(){
    int A[10][10],C[10][10];
    int i,j,r,c,k,l,temp;
    printf("enter number of rows: ");
    scanf("%d",&r);
    printf("enter number of coloumns: ");
    scanf("%d",&c);

    for ( i = 0; i <=r-1; i++)
    {
        for ( j = 0; j <= c-1; j++)
        {
            printf("Enter The value of A[%d][%d] ",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
    
    printf("\n");
    for ( i = 0; i <=r-1; i++)
    {
        for ( j = 0; j <= c-1; j++)
        {
            C[i][j]=A[j][i];
        }
        
    }

    for ( i = 0; i <=r-1; i++)
    {
        for ( j = 0; j <= c-1; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
    for ( i = 0; i < r; i++)
    {
        k=0,l=r-1;
        while (k<l)
        {
            temp=C[k][i];
            C[k][i]=C[l][i];
            C[l][i]=temp;
            k++;
            l--;
        }   
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
    
}

