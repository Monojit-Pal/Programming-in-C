//Write a program to keep taking numbers as input from user until user enters a number which is multiple of 7.
#include<stdio.h>
int main()
{
    int n;
    do {
        printf("\nEnter a number:");
        scanf("%d",&n);
        printf("\n%d",n);
        if(n%7!=0)
        {
            break;
        }
    } while(1);
    printf("\nThank you");
    return 0;
}