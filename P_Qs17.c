//Write a program to print all the odd numbers from 5 to 50 using continue.
#include<stdio.h>
int main()
{
    int i;
    for(i=5;i<=50;i++)
    {
        if(i%2==0)
        continue;
        printf("\n%d",i);
    }
    return 0;
}