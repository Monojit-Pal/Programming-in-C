//Write a program to calculate the sum of all numbers between 5 and 50.
#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=5;i<=50;i++)
    {
        sum+=i;
    }
    printf("\nSum: %d",sum);
    return 0;
}