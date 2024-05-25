//Write a program to test whether a given year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter year: ");
    scanf("%d",&year);
    if(year%4==0)
        printf("%d is leap year",year);
    else
        printf("%d is not leap year",year);
    return 0;
}