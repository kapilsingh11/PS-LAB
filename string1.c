#include<stdio.h>
#include<string.h>
int main(){
    char str2[20];
    char str1[20];
    gets(str1);
    gets(str2);
    int i=0,j=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    puts(str1);
    
    
}