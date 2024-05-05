//Write a program to generate the Fibonacci series upto a given number of terms.
#include<stdio.h>
int main()
{
    int n,i;
    int a=0,b=1;
    int nextTerm=a+b;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d\t",nextTerm);
        a=b;
        b=nextTerm;
        nextTerm=a+b;
    }
    return 0;
}