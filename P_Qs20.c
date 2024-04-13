//Write a function that prints Namaste if user is Indian and Bonjour is the user is French.
#include<stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("\nEnter f for French & i for Indian: ");
    scanf("%c",&ch);
    if(ch=='i')
        namaste();
    else if(ch=='f')
        bonjour();
    else
        printf("Invalid Input");
    return 0;
}

void namaste()
{
    printf("\nNamaste");
}
void bonjour()
{
    printf("\nBonjour");
}