//Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include<stdio.h>

void doWork(int a,int b,int *sum,int *prod, int *avg);

int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("\nSum= %d, Product= %d, Average= %d",sum,prod,avg);
    return 0;
}

void doWork(int a,int b,int *sum,int *prod, int *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}