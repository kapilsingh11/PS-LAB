//sum of first n natural numbers

#include<stdio.h>
int sum(int n);

int main(){
int n;
printf("enter any number: ");
scanf("%d",&n);
printf("sum is %d",sum(n));
return 0;
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNm=sum(n-1);
    int sumN=sumNm+n;
    return sumN;
} 
