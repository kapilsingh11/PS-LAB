#include <stdio.h>
int volume(int n);
int main()
{
    int n;

    printf("enter the radius: ");
    scanf("%d", &n);

    volume(n);
}
int volume(int n)
{
    int n, vol;
    vol = 1.33 * 3.14 * n* n * n;

    printf("%d", vol);
}