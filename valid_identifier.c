#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 0;
    char s[100];
    int i = 1;
    gets(s);
    if (s[0] == '_' || (s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
    {
        while (s[i] = !'\0')
        {
            if (s[i] == '_' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '$')
            {
                flag = 0;
                i++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("valid");
        }
        else
        {
            printf("Not valid");
        }
    }
    else
    {
        printf("Not valid");
    }
}