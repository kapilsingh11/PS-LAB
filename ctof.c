//celsius to ferhanite
#include<stdio.h>
float converttemp(float celsius);
int main()
{
    float ferh=converttemp(37);

printf("temp is %f",ferh);
return 0;
}
float converttemp(float celsius){
    float ferh=celsius*(9.0/5.0)+32;
    return ferh;
}