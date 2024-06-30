//Write a program to find the mean and standard deviation of a given set of numbers.

#include<stdio.h>
#include<math.h>

int main()
{
    int num[100];
    int n,i;
    float mean,var,sd;
    printf("\nEnter the no. of numbers: ");
    scanf("%d",&n);
    printf("\nEnter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        mean+=num[i];
    }
    mean/=n;
    for(i=0;i<n;i++)
    {
        var+=pow((num[i]-mean),2);
    }
    sd=sqrt(var/n);
    printf("Mean: %f\tStandard Deviation: %f",mean,sd);
    return 0;
}