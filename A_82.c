//Write a program containing functions that can substitute the in-built functions toupper() and tolower().

#include<stdio.h>

int upper(int c);
int lower(int c);

int main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("lower(%c) = %c",ch,lower(ch));
    else if(ch>='a' && ch<='z')
        printf("upper(%c) = %c",ch,upper(ch));
    else
        printf("Cannot be changed!");
    return 0;
}

int upper(int c)
{
    return c-32;
}

int lower(int c)
{
    return c+32;
}