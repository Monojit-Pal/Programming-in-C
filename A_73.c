//Write a program to check whether a given text is palindrome.

#include<stdio.h>
#include<string.h>

int main()
{
    char text[100];
    int i,length,flag=0;
    printf("\nEnter the text: ");
    scanf("%s",&text);
    length=strlen(text);
    for(i=0;i<length/2;i++)
    {
        if(text[i]!=text[length-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("%s is not a palindrome",text);
    else
        printf("%s is palindrome",text);
    return 0;
}