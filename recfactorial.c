//factorial using recursion.

#include<stdio.h>
int fact(int n);
int main(){
    int  n;
    printf("enter any number : ");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
    return 0;

}
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    
    int factNm=fact(n-1);
    int factN=factNm*n;
    return factN;

}
