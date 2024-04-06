#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    char choice;
    double temperature;

    // Prompting user to choose the conversion type
    printf("Choose the conversion type:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf(" %c", &choice);

    // Prompting user to enter the temperature
    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    // Performing the conversion based on the choice
    switch(choice) {
        case '1':
            printf("%.2lf Fahrenheit is equivalent to %.2lf Celsius.\n", temperature, fahrenheitToCelsius(temperature));
            break;
        case '2':
            printf("%.2lf Celsius is equivalent to %.2lf Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            return 1; // Exiting the program with error code 1
    }

    return 0; // Exiting the program with success code 0
}
