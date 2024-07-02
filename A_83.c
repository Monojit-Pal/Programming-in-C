//Write a program containing function that can substitute the in-built function pow() with integer parameters.

#include<stdio.h>

int my_pow(int n,int p);

int main()
{
    int n,p;
    printf("\nEnter the number and its power: ");
    scanf("%d%d",&n,&p);
    if(p<0)
        printf("Cannot calculate floating numbers!");
    else
        printf("\n%d^%d : %d",n,p,my_pow(n,p));
    return 0;
}

int my_pow(int n,int p)
{
    int result=1;
    for(int i=0;i<p;i++)
        result*=n;
    return result;
    
}