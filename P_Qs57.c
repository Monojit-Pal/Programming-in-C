//Create an array of size 5(using calloc) & enter its values from the user.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    
    printf("Enter numbers(5): ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }

    //print
    for(int i=0;i<5;i++)
    {
        printf("Number %d is %d\n",i,ptr[i]);
    }

    return 0;
}