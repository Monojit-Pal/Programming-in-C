//Write a program to find the largest and smallest among three given numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    //for largest number
    if(a>b && a>c)
        printf("%d is the largest number\n",a);
    else if(b>a && b>c)
        printf("%d is the largest number\n",b);
    else if(c>a && c>b)
        printf("%d is the largest number\n",c);
    //for smallest number
    if(a<b && a<c)
        printf("%d is the smallest number\n",a);
    else if(b<a && b<c)
        printf("%d is the smallest number\n",b);
    else if(c<a && c<b)
        printf("%d is the smallest number\n",c);
    return 0;
}