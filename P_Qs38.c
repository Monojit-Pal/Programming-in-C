//Ask the user to enter their firstName & print it back to them.
#include<stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[50];
    printf("\nEnter your first name: ");
    scanf("%s",firstName);
    printString(firstName);
    return 0;
}

void printString(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}