//print namaste if user is indians and bonjour if user is french
#include<stdio.h>
void namaste();
void bonjour();
 int main(){
    printf("enter i for indian and f for french=  ");
    char ch;
    scanf("%c",&ch);
    if (ch=='i')
    {
       printf("namaste");
    } else {
        printf("bonjour");
    }
    
   return 0;
 }
void namaste(){
    printf("namaste \n");
}

void bonjour(){
    printf("bonjoue \n");
}