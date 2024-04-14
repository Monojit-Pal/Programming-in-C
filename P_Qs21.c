//Write a program to calculate the square of a number given by user using library function.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("%f",pow(n,2));
    return 0;
}
