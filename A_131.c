//Write a function to swap the contents of two integer variable by passing the variable by address.

#include<stdio.h>

void swap_number(int *a,int *b);

int main()
{
    int x,y;
    printf("\nEnter two number: ");
    scanf("%d%d",&x,&y);
    printf("Before swapping: x = %d, y = %d\n",x, y);
    swap_number(&x,&y);
    printf("After swapping:  x = %d, y = %d\n",x, y);
    return 0;
}

void swap_number(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}