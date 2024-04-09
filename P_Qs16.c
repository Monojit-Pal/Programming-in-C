//Write a program to print all numbers from 1 to 10 except 6.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==6)
        continue;
        printf("\n%d",i);
    }
    return 0;
}