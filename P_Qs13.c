//Write a program to print the table of a number input by user.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    int i;
    printf("\nTable of %d",n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d X %d = %d",n,i,n*i);
    }
    return 0;
}