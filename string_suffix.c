#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    gets(str);
    int i=0;

    while (str[i] != '\0')
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
        i++;
    }
}