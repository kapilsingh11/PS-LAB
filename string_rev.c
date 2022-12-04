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
    char t;
    i=count-1;
    int j=0;
    while (j<i)
    {
        t=name[i];
        name[i]=name[j];
        name [j]= t;
        j++;
        i--;
    }
    printf("%s",name);
    
}