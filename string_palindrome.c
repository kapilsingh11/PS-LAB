#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char name[20];
    gets(name);
    puts(name);
    while (name[i] != '\0')
    {
        count += 1;
        i = i + 1;
    }
    char t;
    i = count - 1;
    int j = 0;
    int flag = 0;
    while (j < i)
    {
        if (name[j] != name[i])
        {
            flag = 1;
            break;
        }

        j++;
        i--;
    }
    if (flag == 1)
    {
        printf("not palindrome");
    }
    else
    {
        printf("palindrome");
    }
}