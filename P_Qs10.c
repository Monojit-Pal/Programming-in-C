//Write a program to print the numbers from 0 to n, if n is given by user using while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    int i=0;
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}