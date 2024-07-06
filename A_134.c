/* Write a program that passes a structure to a function that accepts the user input for the
   structure memebrs. Create another function to print the structure members.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to hold user information
struct UserInfo {
    char *name;
    char *address;
};

// Function to input user information
void inputUserInfo(struct UserInfo *user) {
    char buffer[100];

    printf("Enter name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character
    user->name = (char *)malloc(strlen(buffer) + 1);
    strcpy(user->name, buffer);

    printf("Enter address: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character
    user->address = (char *)malloc(strlen(buffer) + 1);
    strcpy(user->address, buffer);
}

// Function to print user information
void printUserInfo(const struct UserInfo *user) {
    printf("\nName: %s\n", user->name);
    printf("Address: %s\n", user->address);
}

int main() {
    struct UserInfo user;

    // Input user information
    inputUserInfo(&user);

    // Print user information
    printUserInfo(&user);

    // Free dynamically allocated memory
    free(user.name);
    free(user.address);

    return 0;
}