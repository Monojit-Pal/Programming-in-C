//Write a program to show the use of Bitwise operators.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("a & b = %d\n",a&b);
    printf("a | b = %d\n",a|b);
    printf("~ a = %d\n",~a);
    printf("a ^ b = %d\n",a^b);
    printf("a << 2 = %d\n",a<<2);
    printf("a >> 2 = %d\n",a>>2);
    return 0;
}