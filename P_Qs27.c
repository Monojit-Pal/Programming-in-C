//Write a function to calculate percentage of a student from marks in Science, Maths and Sanskrit.
#include<stdio.h>

int calcPercentage(int science,int maths,int sanskrit);

int main()
{
    int science,maths,sanskrit;
    printf("\nEnter marks in Science, Maths and Sanskrit: ");
    scanf("%d%d%d",&science,&maths,&sanskrit);
    printf("\nPercentage is %d",calcPercentage(science,maths,sanskrit));
    return 0;
}

int calcPercentage(int science,int maths,int sanskrit)
{
    return (science+maths+sanskrit)/3;
}