//Write a program to assign grade of a student according to his/her rank.
#include<stdio.h>
int main()
{
    int rank;
    printf("\nEnter rank (1-10000): ");
    scanf("%d",&rank);
    if(rank<100)
        printf("A");
    else if(rank>=100 && rank<1000)
        printf("B");
    else if(rank>=1000 && rank<=10000)
        printf("C");
    else
        printf("Invalid Rank");
    return 0;
}