//Write a program to find the roots of a quadratic equation with the coefficients given.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\nEnter the coefficients in this format Ax2 + Bx + C:");
    scanf("%d%d%d",&a,&b,&c);
    float D=b*b-4*a*c;
    float root1=(-b+sqrt(D))/(2*a);
    float root2=(-b-sqrt(D))/(2*a);
    printf("Roots are %f  %f",root1,root2);
    return 0;
}