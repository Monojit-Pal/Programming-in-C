# Number System Converter Program Documentation

## Overview

This is a C program that converts decimal numbers to binary, octal, or hexadecimal numbers. The user is prompted to enter a decimal number and choose the desired conversion type. The program then performs the conversion and displays the result.

## Features

- Supports conversion from decimal to binary, octal, and hexadecimal.
- Provides accurate conversion using the respective algorithms.
- Displays the converted number in the chosen number system.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Enter a decimal number when prompted.
4. Choose the conversion type (1 for binary, 2 for octal, 3 for hexadecimal).
5. The program will display the converted number.

## Example

```
Enter a decimal number: 123
Choose the conversion type:
1. Decimal to Binary
2. Decimal to Octal
3. Decimal to Hexadecimal
Enter your choice (1, 2, or 3): 1
Binary equivalent: 1111011
```

## Implementation Details

- The program provides separate functions for converting decimal numbers to binary, octal, and hexadecimal.
- It uses arrays to store the converted digits and prints them in reverse order to display the correct equivalent.
- Error handling is implemented to handle invalid user input.

## Requirements

- C compiler (e.g., GCC) installed on your system.

