//Write a program to generate all prime numbers upto a given limit.
#include<stdio.h>
int main()
{
    int n;
    int i,j,flag;
    printf("\nEnter limit: ");
    scanf("%d",&n);
    printf("\nAll prime numbers between 1 to %d are:\n",n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\t",i);
    }
    return 0;
}