# Palindrome Checker Program Documentation

## Overview

This is a simple C program that checks whether a given string is a palindrome or not. The program removes non-alphanumeric characters from the input string, converts it to lowercase, and then checks if it reads the same forwards and backwards.

## Features

- Removes non-alphanumeric characters from the input string.
- Ignores case sensitivity when checking for palindromes.
- Displays whether the input string is a palindrome or not.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Enter a string when prompted.
4. The program will remove non-alphanumeric characters, convert the string to lowercase, and check if it's a palindrome.
5. The program will display whether the input string is a palindrome or not.

## Example

```
Enter a string: A man, a plan, a canal, Panama!
'A man a plan a canal Panama' is a palindrome.
```

## Implementation Details

- The program removes non-alphanumeric characters and converts the input string to lowercase before checking for palindromes.
- It uses a loop to iterate through the string and compare characters from both ends to determine if it's a palindrome.
- Case sensitivity is ignored when checking for palindromes.

## Requirements

- C compiler (e.g., GCC) installed on your system.


