//Write a program to multiply two given matrices.

#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],m[10][10];
    int r,c,i,j,k;
    printf("\nEnter row and column of matrix: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter first matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter second matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
            for(k=0;k<c;k++)
                m[i][j]+=a[i][k]*b[k][j];
        }
    }

    printf("\nMultiplication of the matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",m[i][j]);
        printf("\n");
    }
    return 0;
}