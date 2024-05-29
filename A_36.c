//Write a program using switch-case to find sum, difference, product, quotient of two given integers.
#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter s for sum, d for difference, p for product, q for quotient: ");
    scanf("%c",&ch);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 's':
            printf("Sum: %d",a+b);
            break;
        case 'd':
            printf("Difference: %d",a-b);
            break;
        case 'p':
            printf("Product: %d",a*b);
            break;
        case 'q':
            printf("Quotient: %d",a/b);
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}