/* Write a C program that stores a structure containing roll,name, and address of a student;
   accept the details of several students; sort the details in ascending order of roll; and 
   show the sorted student's details */

#include<stdio.h>

struct student{
    int roll;
    char name[100];
    char address[100];
};

int main()
{
    struct student s[100];
    int n,i,j;
    struct student temp;
    printf("\nEnter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d",i+1);
        printf("\nEnter roll no: ");
        scanf("%d",&s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter address: ");
        scanf("%s",s[i].address);
    }
    //Sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j].roll>s[j+1].roll)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    //display
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\nRoll No: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nAddress: %s",s[i].address);
        printf("\n");
    }
    return 0;
}