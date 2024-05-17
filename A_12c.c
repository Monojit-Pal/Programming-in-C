//Write a program to read three sides of a triangle from the user and calculate perimeter and area of the triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p,s,area;
    printf("\nEnter three sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    p=a+b+c;
    s=p/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter: %f",p);
    printf("Area: %f",area);
    return 0;
}