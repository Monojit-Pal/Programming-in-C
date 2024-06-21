//Write a program to change the contents of a particular position of the array.

#include<stdio.h>

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n,val,i;
    printf("\nEnter the position to change: ");
    scanf("%d",&n);
    printf("\nEnter the value: ");
    scanf("%d",&val);
    printf("\nOriginal Array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    arr[n]=val;
    printf("\nModified Array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}