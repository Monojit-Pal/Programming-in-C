//Write a program to calculate the real roots of a quadratric equation.

#include<stdio.h>
#include<math.h>

void roots_quadratic(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("\nEnter the coefficients in this format Ax2 + Bx + C:");
    scanf("%d%d%d",&a,&b,&c);
    roots_quadratic(a,b,c);
    return 0;
}

void roots_quadratic(int a,int b,int c)
{
    float D=b*b-4*a*c;
    if(D>0)
    {
        float root1=(-b+sqrt(D))/(2*a);
        float root2=(-b-sqrt(D))/(2*a);
        printf("Roots are %f  %f",root1,root2);
    }
    else
        printf("Roots are not real");
}