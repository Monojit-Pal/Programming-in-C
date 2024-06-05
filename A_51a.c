/*Write a program to generate the following pattern
    1
    12
    123
    1234 */

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("\nEnter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}
