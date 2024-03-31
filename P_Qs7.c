/*Write a program to give grades to a student.
    marks<30 is C
    30<=marks<70 is B
    70<=marks<90 is A
    90<=marks<=100 is A+
*/
#include<stdio.h>
int main()
{
    int marks;
    printf("\nEnter marks:");
    scanf("%d",&marks);
    if(marks<30)
    printf("\nC");
    else if(marks>=30 && marks<70)
    printf("\nB");
    else if(marks>=70 && marks<90)
    printf("\nA");
    else if(marks>=90 && marks<=100)
    printf("\nA+");
    else
    printf("Invalid marks");
    return 0;
}