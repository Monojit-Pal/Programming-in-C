/*Write a program to check if a student passed or failed.
    marks>30 is PASS
    marks<=30 is FAIL
*/
#include<stdio.h>
int main()
{
    int marks;
    printf("\nEnter marks:");
    scanf("%d",&marks);
    if(marks>30)
    printf("\nPASS");
    else
    printf("\nFAIL");
}