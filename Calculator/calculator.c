#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompting user to enter operator
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompting user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing arithmetic operations based on the operator entered
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Checking if the denominator is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exiting the program with error code 1
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exiting the program with error code 1
    }

    // Displaying the result
    printf("Result: %.2lf\n", result);

    return 0; // Exiting the program with success code 0
}

