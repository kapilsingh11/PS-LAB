#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    int S[7]={0},k=0;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter the elements A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }   
    }
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            S[k]=S[k]+A[i][j];
        }   
        k++;
    }
    for (j = 0; j < 3; j++)
    {
        for ( i = 0; i < 3; i++)
        {
            S[k]=S[k]+A[j][i];
        }   
        k++;
    }
    for ( i = 0,j=0; i < 3,j<3; i++,j++)
    {
        if (i==j)
        {
            S[k]=S[k]+A[i][j];
        }    
    } 
    if(S[0]==S[1] && S[1]==S[2] && S[2]==S[3] && S[3]==S[4] && S[4]==S[5] && S[5]==S[6] )
    {
        printf("valid matrix square");
    }else{
        printf("not a matrix square");
    }
}