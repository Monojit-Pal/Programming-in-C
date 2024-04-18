//Write a program to print the factorial of n using recursive function.
#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("Factorial of %d: %d",n,fact(n));
    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}