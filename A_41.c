//Write a program that takes the first term, common difference and number of terms of an A.P. and generates all the terms.
#include<stdio.h>
int main()
{
    int a,d,n;
    printf("\nEnter first term, common difference and number of terms: ");
    scanf("%d%d%d",&a,&d,&n);
    printf("A.P. series:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a+i*d);
    }
    return 0;
}