//Write a program to test whether a given integer is prime or composite.
#include<stdio.h>
int main()
{
    int n;
    int i,flag=0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("%d is neither prime nor composite",n);
        return 0;
    }
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is prime",n);
    else
        printf("%d is composite",n);
    return 0;
}