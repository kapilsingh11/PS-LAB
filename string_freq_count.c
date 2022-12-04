#include <stdio.h>
#include <string.h>
void char_repeated(char a[])
{
    int i = 0;
    int b[26] = {0};
    while (a[i] !='\0')
    {
        b[a[i] - 97] += 1;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (b[i] >= 1)
        {
            
            printf("%c comes %d times", ('i' + a), b[i]);
        }
    }
}
int main()
{
    char str[100];
    gets(str);
    char_repeated(str);
}