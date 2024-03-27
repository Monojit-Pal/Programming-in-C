//Write a program to check if a number is divisible by 2 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is a divisible by 2",num);
    else
    printf("%d is not divisible by 2",num);
    return 0;
}	