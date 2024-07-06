//Write a program consisting of a function that can sort an array passed to it.

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int *arr,int n);

int main()
{
    int *arr;
    int n,i,j,temp;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    bubble_sort(arr,n);

    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    free(arr);

    return 0;
}

void bubble_sort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}