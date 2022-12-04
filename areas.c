#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a ,float b);


int main()
{
    float side ,radius,a,b;
    printf("enter value: ");
    scanf("%f",&side);
    printf("area of square %f",squarearea(side));

    printf("enter value: ");
    scanf("%f",&radius);
    printf("area of circle %f",circlearea(radius));

   
    printf("enter value: ");
    scanf("%f %f",&a,&b);
    printf("area of rectangle %f",rectanglearea(a,b));




}
float squarearea(float side){
    return side*side;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float rectanglearea(float a ,float b){
    return a * b;
}


