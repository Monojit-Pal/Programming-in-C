//Write a program to keep taking numbers as input from user until user enters an odd number.
#include<stdio.h>
int main()
{
    int n;
    do {
        printf("\nEnter a number:");
        scanf("%d",&n);
        printf("\n%d",n);
        if(n%2!=0)
        {
            break;
        }
    } while(1);
    printf("\nThank you");
    return 0;
}