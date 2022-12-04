//take input from user untill user enters a number multiple of 7

#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter number =  ");
        scanf("%d",&n);
        printf("%d \n",n);
        if (n%7==0)
        {
            break;
        }
        
    } while (1);
    printf("thankyou \n");
    return 0;
    
}