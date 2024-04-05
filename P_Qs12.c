//Write a program to print the reverse of first n natural numbers using do while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d",&n);
    int i=n;
    do {
        printf("\n%d",i);
        i--;
    } while(i>=1);
    return 0;
}