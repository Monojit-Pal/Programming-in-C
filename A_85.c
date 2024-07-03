//Write a program containing a function that checks whether a given year is a leap year and returns 1 or accordingly.
#include<stdio.h>

int isleapyear(int year);

int main()
{
    int y;
    printf("\nEnter year: ");
    scanf("%d",&y);
    if(isleapyear(y))
        printf("%d is leap year",y);
    else
        printf("%d is not leap year",y);
    return 0;
}

int isleapyear(int year)
{
    if(year%4 == 0)
        return 1;
    else
        return 0;
}
