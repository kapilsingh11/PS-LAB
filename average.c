#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b ,c;
    float sum;
    printf("\n enter three numbers: ");
    scanf("%d %d %d" ,&a,&b,&c);
    sum=a+b+c;
    printf("%f",sum/3);
    return 0;


}