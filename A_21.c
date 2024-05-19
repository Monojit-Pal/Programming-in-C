//Write a program to accept the radius of a circle from the user and calculate its area.
#include<stdio.h>
int main()
{
    float r,area;
    printf("\nEnter radius of circle: ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area: %f",area);
    return 0;
}