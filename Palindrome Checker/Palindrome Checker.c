#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to remove non-alphanumeric characters from a string
void removeNonAlphaNumeric(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0'; // Null-terminate the string
}

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove non-alphanumeric characters and convert to lowercase
    removeNonAlphaNumeric(str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
