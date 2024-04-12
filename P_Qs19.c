//Write 2 functions - one to print "Hello" & second to print "Good bye".
#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main()
{
    printHello(); //function call
    printGoodbye(); //function call
    return 0;

}

//function definition
void printHello()
{
    printf("\nHello");
}
void printGoodbye()
{
    printf("\nGood bye");
}