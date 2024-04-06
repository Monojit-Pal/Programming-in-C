
# File Management System Program Documentation

## Overview

This is a simple file management system program written in C that allows users to perform basic operations such as creating, deleting, copying, and moving files. Users are presented with a menu-driven interface to choose the desired operation.

## Features

- Supports file management operations including creating, deleting, copying, and moving files.
- Provides a menu-driven interface for user interaction.
- Displays appropriate success or error messages after each operation.

## Usage

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Choose the desired operation from the menu.
4. Follow the prompts to provide necessary inputs for the selected operation.
5. The program will execute the chosen operation and display the result.

## Supported Operations

1. **Create File**: Allows users to create a new file by providing the file name.
2. **Delete File**: Allows users to delete an existing file by providing the file name.
3. **Copy File**: Allows users to copy an existing file to another location by providing the source and destination file names.
4. **Move/Rename File**: Allows users to move or rename an existing file by providing the source and destination file names.

## Example

```
File Management System
1. Create File
2. Delete File
3. Copy File
4. Move/Rename File
Enter your choice: 1
Enter the name of the file to create: test.txt
File 'test.txt' created successfully
```

## Implementation Details

- The program uses separate functions for each file management operation.
- It provides error handling for each operation, displaying appropriate error messages if the operation fails.
- User inputs are obtained using `scanf()` function.
- The program includes a menu-driven interface to facilitate user interaction.

## Requirements

- C compiler (e.g., GCC) installed on your system.

