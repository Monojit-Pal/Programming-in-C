//Write a program to read temperature in C from the user and convert it to F and vice versa.
#include<stdio.h>

int main()
{
    float C,F;
    printf("\nEnter temperature in C: ");
    scanf("%f",&C);
    F=((C*9)/5)+32;
    printf("\nTemperature in F: %f",F);

    printf("\nEnter temperature in F: ");
    scanf("%f",&F);
    C=((F-32)*5)/9;
    printf("\nTemperature in C: %f",C);
    return 0;
}