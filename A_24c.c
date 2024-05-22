//Write a program to show the use of Logical &&, ||, ! operator.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d",&n);
    if(n>9 && n<100)
        printf("It is two digit number\n");
    else if(n<10 || n>99)
        printf("It is not two digit number\n");
    if(!n==0)
        printf("It is NOT zero\n");
    return 0;
}