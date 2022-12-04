#include<stdio.h>
int main(){
    int i,j,k=65;                          //char A='A';
    for ( i = 1; i <= 5; i++)
    {
       for ( j = 1; j <=i; j++)
       {
         printf("%c ",k);                  //A
       }
       k=k+1;                              //A=A+1;
       printf("\n");
       
    }
    
}