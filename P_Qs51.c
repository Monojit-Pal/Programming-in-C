//Write a program to input student information from a user & enter it to a file.
#include<stdio.h>

int main()

{
    FILE *fptr;
    fptr=fopen("Student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s",&name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter name: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f",cgpa);

    fclose(fptr);
    return 0;
}