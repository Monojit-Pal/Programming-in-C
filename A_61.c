//Write a program to create an array, assign inputs to it and display its contents.

#include<stdio.h>

int main()
{
    int arr[100];
    int n,i;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}