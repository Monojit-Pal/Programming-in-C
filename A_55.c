//Write a program to generate all the Armstrong numbers from 100 to 1000.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,newN;
    printf("\nAll the Armstrong numbers from 100 to 1000 are:\n");
    for(i=100;i<=1000;i++)
    {
        n=i;
        newN=0;
        while(n>0)
        {
            newN+=pow(n%10,3);
            n/=10;
        }
        if(newN==i)
            printf("%d\t",i);
    }
    return 0;
}