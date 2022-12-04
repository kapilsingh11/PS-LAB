#include <stdio.h>
#include <math.h>
int add(int a);
int count(int a);
int main()
{
    int a;
    printf("enter the value: ");
    scanf("%d", &a);
    add(a);
}
int add(int a)
{
    int x,sum=0;
    while (a != 0)
    {
        x = a % 10;
        a = a / 10;
        sum = sum + x;
    }
    if(count(sum)==1)
    printf("%d",sum);
    else
    return add(sum);
}
int count(int n){
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;  
    }
    return c;
}