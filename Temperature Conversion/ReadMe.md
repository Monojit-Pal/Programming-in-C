# Temperature Conversion Program Documentation

## Overview

This is a C program that converts temperature from Fahrenheit to Celsius or vice versa. The user is prompted to choose the conversion type and enter the temperature to be converted. The program performs the conversion and displays the result.

## Features

- Supports conversion from Fahrenheit to Celsius and Celsius to Fahrenheit.
- Provides accurate temperature conversion using the respective formulas.
- Displays the converted temperature with two decimal places.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Choose the conversion type (1 for Fahrenheit to Celsius, 2 for Celsius to Fahrenheit).
4. Enter the temperature to be converted.
5. The program will display the converted temperature.

## Example

```
Choose the conversion type:
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 1
Enter the temperature: 98.6
98.60 Fahrenheit is equivalent to 37.00 Celsius.
```

## Implementation Details

- The program uses functions to perform temperature conversions:
  - `fahrenheitToCelsius()`: Converts temperature from Fahrenheit to Celsius using the formula `(Fahrenheit - 32) * 5 / 9`.
  - `celsiusToFahrenheit()`: Converts temperature from Celsius to Fahrenheit using the formula `(Celsius * 9 / 5) + 32`.
- The user is prompted to choose the conversion type (Fahrenheit to Celsius or Celsius to Fahrenheit) and enter the temperature.
- Error handling is implemented to handle invalid user input.

## Requirements

- C compiler (e.g., GCC) installed on your system.

