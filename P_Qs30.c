//Write a program to swap 2 numbers, a & b using pointer.
#include<stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);

int main()
{
    int x,y;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&x,&y);
    swap(x,y);
    _swap(&x,&y);
    printf("\nx= %d & y= %d",x,y);
    return 0;
}

//call by value
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("\na= %d & b= %d",a,b);
}

//call by reference
void _swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}