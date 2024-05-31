//Write a program to test whether a given number is a palindrome.
#include<stdio.h>
int main()
{
    int n,newN=0;
    int cpy;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    cpy=n;
    while(cpy>0)
    {
        newN=(newN*10)+(cpy%10);
        cpy/=10;
    }
    if(n==newN)
        printf("%d is palindrome",n);
    else
        printf("%d is not palindrome",n);
    return 0;
}