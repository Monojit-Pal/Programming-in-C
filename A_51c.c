/* Write program to generate the following pattern
    1
    23
    456
    78910   */

#include<stdio.h>

int main()
{
    int n,i,j,c=1;
    printf("\nEnter number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d\t",c++);
        printf("\n");
    }
    return 0;
}