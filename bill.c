#include<stdio.h>

void calculatebill( float value);

int main(){
    float value;
    printf("enter total amount ");
    scanf("%f",&value);
    calculatebill(value);
    return 0;
}

void calculatebill( float value){
    value=value + (0.18*value);
printf("the final amount is : %f",value);
}