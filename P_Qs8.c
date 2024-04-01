//Write a program to find if a character entered by user is uppercase or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    printf("\nUppercase");
    else if(ch>='a' && ch<='z')
    printf("\nLowercase");
    else
    printf("\nNot English Letter");
    return 0;
}