/* Write a program to generate the sum of the following series upto a given number of decimals provided by the user:
    2/1.3 + 4/3.5 + 6/5.7 + ... */

#include<stdio.h>

int main()
{
    int m,n,i;
    double k=2.0,sum=0.0;
    printf("\nEnter number of terms: ");
    scanf("%d",&m);
    printf("\nEnter number of decimal: ");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        sum+= k/((k-1)*(k+1));
        k=k+2;
    }
    printf("Sum up to %d decimal places: %.*f\n", n, n, sum);
    return 0;
}