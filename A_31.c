//Write a program to compare the magnitudes of two given numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater than %d",a,b);
    else if(a<b)
        printf("%d is smaller than %d",a,b);
    else
        printf("%d is equal to %d",a,b);
    return 0;
}