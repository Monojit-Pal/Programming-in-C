//Write a program to check if a person is adult using Ternary operator.
#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter age:");
    scanf("%d",&age);
    age>=18?printf("\nAdult"):printf("\nNot Adult");
    return 0;
}