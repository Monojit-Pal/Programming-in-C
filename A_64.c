//Write a program to accept a set of integers from the user and sort them using the insertion sort algorithm.

#include<stdio.h>

int main()
{
    int arr[100];
    int n,i,j,key;
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

    for (i = 1; i < n; i++) 
    {
        key=arr[i];
        j=i-1;
 
        while(j>=0 && arr[j]>key) 
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

    printf("\nArray after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}