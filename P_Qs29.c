//Write a program to print the value of 'i' from its pointer to pointer.
#include<stdio.h>
int main()
{
    int i;
    printf("\nEnter the value of i: ");
    scanf("%d",&i);
    int *ptr=&i;
    int **pptr=&ptr;
    printf("\n%d",**pptr);
}