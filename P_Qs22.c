//Write a program to calculate area of a square, a circle & a rectangle.
#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float side,rad,a,b;
    printf("\nEnter the side of square: ");
    scanf("%f",&side);
    printf("\nEnter the radius of circle: ");
    scanf("%f",&rad);
    printf("\nEnter the sides of rectangle: ");
    scanf("%f%f",&a,&b);
    printf("\nArea of Square: %f",squareArea(side));
    printf("\nArea of Circle: %f",circleArea(rad));
    printf("\nArea of Rectangle: %f",rectangleArea(a,b));
    return 0;
}

float squareArea(float side)
{
    return side*side;
}

float circleArea(float rad)
{
    return 3.14*rad*rad;
}

float rectangleArea(float a,float b)
{
    return a*b;
}