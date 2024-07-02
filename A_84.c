//Write a program to find factorial, permutation and combination by defining three functions, one each for each operation.

#include<stdio.h>

int fact(int n);
int permutation(int n,int r);
int combination(int n,int r);

int main()
{
    int n,r;
    printf("\nEnter n and r: ");
    scanf("%d%d",&n,&r);

    if(n<0)
        printf("Factorial not defined!");
    else
        printf("n! = %d\n",fact(n));

    if(n<r)
        printf("Permutation, Combination not possible!");
    else
    {
        printf("%dP%d = %d\n",n,r,permutation(n,r));
        printf("%dC%d = %d\n",n,r,combination(n,r));
    }

    return 0;
}

int fact(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
        result*=i;
    return result;
}

int permutation(int n,int r)
{
    int result=1;
    for(int i=n;i>n-r;i--)
        result*=i;
    return result;
}

int combination(int n,int r)
{
    int result=1;
    for(int i=n;i>n-r;i--)
        result*=i;
    int fac=1;
    for(int i=1;i<=r;i++)
        fac*=i;
    result/=fac;
    return result;
}