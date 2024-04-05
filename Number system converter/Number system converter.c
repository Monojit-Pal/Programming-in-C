#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    // Print binary equivalent in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[32], i = 0;

    // Convert decimal to octal
    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }

    // Print octal equivalent in reverse order
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0, remainder;

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i++] = remainder + '0';
        } else {
            hexadecimal[i++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }

    // Print hexadecimal equivalent in reverse order
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    char choice;

    // Prompting user to enter the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Prompting user to choose the conversion type
    printf("Choose the conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf(" %c", &choice);

    // Performing the conversion based on the choice
    switch(choice) {
        case '1':
            decimalToBinary(decimal);
            break;
        case '2':
            decimalToOctal(decimal);
            break;
        case '3':
            decimalToHexadecimal(decimal);
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            return 1; // Exiting the program with error code 1
    }

    return 0; // Exiting the program with success code 0
}
