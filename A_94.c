//Write a program using recursive function calling to print a text backward.

#include<stdio.h>

void print_reverse(char *str);

int main()
{
    char text[100];
    printf("\nEnter text: ");
    scanf("%s",text);
    printf("Original text: %s\n", text);
    printf("Reversed text: ");
    print_reverse(text);
    return 0;
}

void print_reverse(char *str)
{
    if(*str=='\0')
        return;
    print_reverse(str+1);
    putchar(*str);
}