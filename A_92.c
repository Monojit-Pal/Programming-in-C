/*Write a program to find the sum of the following series correct upto a given number of decimals by recursive function caling.
    2/1.3 + 4/3.5 + 6/5.7 + ... */

#include<stdio.h>

double sum_series(int i,int m,double k,double sum);

int main()
{
    int m,n,i;
    double k=2.0,sum=0.0;
    printf("\nEnter number of terms: ");
    scanf("%d",&m);
    printf("\nEnter number of decimal: ");
    scanf("%d",&n);
    printf("Sum up to %d decimal places: %.*f\n", n, n, sum_series(1,m,k,sum));
    return 0;
}

double sum_series(int i,int m,double k,double sum)
{
    if(i>m)
        return sum;
    else
        return sum_series(i+1,m,k+2,sum+k/((k-1)*(k+1)));
}