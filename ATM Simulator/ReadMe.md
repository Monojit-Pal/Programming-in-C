# ATM Simulator Program Documentation

## Overview

This is a simple ATM simulator program written in C that allows users to deposit, withdraw, and check their balance. Users are presented with a menu-driven interface to choose their desired operation.

## Features

- Supports depositing, withdrawing, and checking balance operations.
- Provides a menu-driven interface for user interaction.
- Displays appropriate messages for each operation, including success messages, error messages, and current balance.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Choose the desired operation from the menu.
4. Follow the prompts to provide necessary inputs for the selected operation.
5. The program will execute the chosen operation and display the result.

## Supported Operations

1. **Deposit**: Allows users to deposit money into their account by specifying the amount.
2. **Withdraw**: Allows users to withdraw money from their account by specifying the amount. Checks for sufficient funds.
3. **Check Balance**: Allows users to check their current account balance.

## Example

```
Welcome to the ATM Simulator

1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Enter your choice: 1
Enter amount to deposit: 100
Deposited 100.00. New balance: 100.00

1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Enter your choice: 2
Enter amount to withdraw: 50
Withdrawn 50.00. New balance: 50.00

1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Enter your choice: 3
Your current balance is: 50.00

1. Deposit
2. Withdraw
3. Check Balance
4. Exit
Enter your choice: 4
Thank you for using the ATM. Goodbye!
```

## Implementation Details

- The program uses functions to perform deposit, withdraw, and check balance operations.
- User inputs are obtained using the `scanf()` function.
- Error handling is implemented for withdrawal operations to check for insufficient funds.
- The program continues running until the user chooses to exit.

## Requirements

- C compiler (e.g., GCC) installed on your system.

