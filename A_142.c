//Write a program to read the contents of input.txt, sort the integers an store the output to another file output.txt

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int *arr = NULL;
    int n = 0, capacity = 10, num, i, j, temp;

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    // Allocate initial memory for the array
    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        fclose(inputFile);
        return 1;
    }

    // Read integers from the file
    while (fscanf(inputFile, "%d", &num) == 1) {
        if (n >= capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                fclose(inputFile);
                return 1;
            }
        }
        arr[n++] = num;
    }

    // Close input file
    fclose(inputFile);

    // Print the integers before sorting
    printf("Integers before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Sort the array using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the integers after sorting
    printf("\nIntegers after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Open output.txt for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt\n");
        free(arr);
        return 1;
    }

    // Write sorted integers to the file
    for (i = 0; i < n; i++) {
        fprintf(outputFile, "%d\n", arr[i]);
    }

    // Close output file
    fclose(outputFile);

    // Free allocated memory
    free(arr);

    printf("Sorted integers successfully written to output.txt\n");

    return 0;
}
