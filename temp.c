#include<stdio.h>
int main(){
    int temp;
    printf("enter temperature in centigrate: ");
    scanf("%d",&temp);
    if (temp<0)
    {
        printf("freezing wheather");
    }
    if (0<temp<10)
    {
        printf("very cold wheather");
    }if (10<temp<20)
    {
        printf("cold wheather");
    }if (20<temp<30)
    {
        printf("normal wheather");
    }if (30<temp<40)
    {
        printf("hot wheather");
    }if (temp>40)
    {
        printf("very hot wheather");
    }
    return 0;
}






















































    
