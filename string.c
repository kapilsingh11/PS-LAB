#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char name[20];
    gets(name);
    puts(name);
    while (name[i]!= '\0')
    {
        count+=1;
        i=i+1;
    }
    printf("%d",count);
}
