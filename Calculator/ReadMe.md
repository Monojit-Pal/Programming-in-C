# Simple Calculator Program Documentation

## Overview

This is a simple calculator program written in C that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. The program prompts the user to enter an operator and two numbers, then performs the specified arithmetic operation and displays the result.

## Features

- Supports addition (+), subtraction (-), multiplication (*), and division (/) operations.
- Checks for division by zero and invalid operators, displaying appropriate error messages.
- Provides the result of the arithmetic operation with two decimal places.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Enter the operator (+, -, *, /) when prompted.
4. Enter two numbers when prompted.
5. The program will perform the arithmetic operation and display the result.

## Example

```
Enter operator (+, -, *, /): +
Enter two numbers: 12 4
Result: 16.00
```

## Error Handling

- If the user tries to divide by zero, the program displays an error message: "Error! Division by zero is not allowed."
- If the user enters an invalid operator, the program displays an error message: "Error! Invalid operator."

## Implementation Details

- The program uses the `scanf()` function to read input from the user.
- A `switch` statement is used to determine the operation based on the operator entered by the user.
- Error handling is implemented to check for division by zero and invalid operators.

## Requirements

- C compiler (e.g., GCC) installed on your system.

