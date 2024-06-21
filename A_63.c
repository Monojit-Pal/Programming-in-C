//Write a program to accept a set of integers from the user and sort them using the bubble sort algorithm.

#include<stdio.h>

int main()
{
    int arr[100];
    int n,i,j,temp;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}