#include <stdio.h>
#include <string.h>
int main()
{
    
    char name[20];
    char name2[20];
    gets(name);
    puts(name);
    gets(name2);
    puts(name2);

    int flag = 0;
    int i = 0;
    while (name[i] != '\0' && name2[i] != '\0')
    {
        if (name[i] != name2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag==1)
    {
        printf("not same");
    }else{
        printf("same");
    }
    
}