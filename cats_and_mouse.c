#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if (abs(A-C)>abs(B-C))
    {
        printf("CAT B");
    }else
    if (abs(A-C)<abs(B-C))
    {
        printf("CAT A");
    }else
    if (abs(A-C)==abs(B-C))
    {
        printf("mouse");
    }
    
    
}
