#include<stdio.h>
int main(){
    int x,y;
    printf("enter x coordinate : ");
    scanf("%d",&x);
     printf("enter y coordinate : ");
    scanf("%d",&y);

    if (x>0 && y>0)
    {
        printf("1 quad");
    }
    if (x<0 && y>0)
    {
        printf("2 quad");
    }
    if (x<0 && y<0)
    {
        printf("3 quad");
    }
    if (x>0 && y<0)
    {
        printf("4 quad");
    }
    if (x==0 && y!=0)
    {
        printf("y axis");
    }
    if ( y==0 && x!=0)
    {
        printf("x axis");
    }
    if (x==0 && y==0)
    {
        printf("origin");
    }
    return 0;
    
}