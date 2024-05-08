//Write a program to store the data of 3 students.
#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll=45;
    s1.cgpa=9.0;
    strcpy(s1.name,"Monojit");

    printf("Student name: %s\n",s1.name);
    printf("Student roll no: %d\n",s1.roll);
    printf("Student cgpa: %f\n",s1.cgpa);
    printf("\n");

    struct student s2;
    s2.roll=15;
    s2.cgpa=8.5;
    strcpy(s2.name,"Rudraneel");

    printf("Student name: %s\n",s2.name);
    printf("Student roll no: %d\n",s2.roll);
    printf("Student cgpa: %f\n",s2.cgpa);
    printf("\n");

    struct student s3;
    s3.roll=63;
    s3.cgpa=8.9;
    strcpy(s3.name,"Sangini");

    printf("Student name: %s\n",s3.name);
    printf("Student roll no: %d\n",s3.roll);
    printf("Student cgpa: %f\n",s3.cgpa);
    printf("\n");

    return 0;
}