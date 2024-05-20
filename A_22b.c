//Write a program to swap the values of two integer variables without using temporary variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d  %d",a,b);
    return 0;
}