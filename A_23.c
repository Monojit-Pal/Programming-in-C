//Write a program to print the unit's place and ten's place of an integer.
#include<stdio.h>
int main()
{
    int n;
    int u,t;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    u=n%10;
    t=(n%100)/10;
    printf("Unit's place: %d\tTen's place: %d",u,t);
    return 0;
}