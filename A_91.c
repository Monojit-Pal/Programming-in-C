//Write a program to find the factorial of a given number by recursive function calling.

#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nFactorial of %d is: %d",n,fact(n));
    return 0;
}

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}