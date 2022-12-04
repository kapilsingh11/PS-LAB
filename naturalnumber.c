#include<stdio.h>
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d",&number);
    if(number>=1 )
    {
        printf("number is natural");
    }
    else{
        printf(" is not a natural number");
    }
    return 0;

}