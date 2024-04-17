//Write a program to print the sum of first n natural numbers using recursive function.
#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nSum: %d",sum(n));
    return 0;
}

//recursive function
int sum(int n)
{
    if(n==1)
        return 1;
    int sumNm1=sum(n-1); //sum of 1 to n
    int sumN=sumNm1+n;
    return sumN;
}