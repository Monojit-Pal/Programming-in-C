/* Write a program to read two integers from the user and print their sum, difference,
   product, quotient when the first number is divided by the second and remainder when 
   the first number is divided by the second.
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two values: ");
    scanf("%d%d",&a,&b);
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",a-b);
    printf("Product: %d\n",a*b);
    printf("Quotient: %d\n",a/b);
    printf("Remainder: %d\n",a%b);
    return 0;
}