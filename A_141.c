//Write a program to store a set of integers to a file input.txt

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n, i, num;

    // Open the file for writing
    file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Prompt the user for the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Prompt the user to enter the integers
    printf("Enter the integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);  // Write each integer to the file
    }

    // Close the file
    fclose(file);

    // Reopen the file for reading
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Print the set of integers
    printf("The integers are:\n");
    while (fscanf(file, "%d", &num) != EOF) {
        printf("%d\t", num);
    }
    printf("\n");

    // Close the file
    fclose(file);

    printf("Integers successfully written to input.txt\n");

    return 0;
}