#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d,c1,c2;
    float x1, x2;
    printf("enter the values of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = ((b * b) - (4 * a * c));
    if (d > 0)
    {
        printf("real and distinct");
    }
    else if (d == 0)
    {
        printf("real and equal");
    }
    else
    {
        printf("imaginary and distinct");
    }
    if (d > 0)
    {
        x1 = (-b + (pow(d , 0.5))) / (2 * a);
        x2 = (-b - (pow(d , 0.5))) / (2 * a);
        printf("\nroots are %.2f %.2f", x1, x2);
    }
    else if (d == 0)
    {
        x1=-b/(2*a);
        printf("\nroots are:%d",x1);
    }
    else
    {
        d=-1*d;
        d=pow(d,.5);
        x1=-b/(2*a);
        c1=(d/(2*a));
        c2=-(d/(2*a));
        printf("root:%d",x1+c1);
        printf("root:%d",x1+c2);
    }
}