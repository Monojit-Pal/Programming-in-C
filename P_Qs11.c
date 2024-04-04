//Write a program to print the sum of first n natural numbers using do while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d",&n);
    int i=1,sum=0;
    do {
        sum+=i;
        i++;
    } while(i<=n);
    printf("\nSum: %d",sum);
    return 0;
}