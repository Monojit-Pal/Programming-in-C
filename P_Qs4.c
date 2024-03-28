//Write a program to check if a number is greater than 9 & less than 100.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d",&num);
    printf("%d",num>9 && num<100);
    return 0;
}