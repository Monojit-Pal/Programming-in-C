//Write a program to swap the values of two integer variables using temperoray variable.
#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d  %d",a,b);
    return 0;
}