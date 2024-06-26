//Write a program to add two given matrices.

#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],s[10][10];
    int r,c,i,j;
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
        s[i][j]=a[i][j]+b[i][j];
    }
    printf("\nSum of the matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",s[i][j]);
        printf("\n");
    }
    return 0;
}