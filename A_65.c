//Write a program to accept a set of integers from the user and sort them using the selection sort algorithm.

#include<stdio.h>

int main()
{
    int arr[100];
    int n,i,j,min,temp;
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

    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)  
        {
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }  
    }

    printf("\nArray after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}