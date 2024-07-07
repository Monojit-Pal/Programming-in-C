/* Write a program with structure to store student's records (viz roll, name, address, etc.).
   The program should store the records in a file student.dat. When the record of a student is
   required, the roll number should be provided and the corresponding record should be read from
   the file and displayed. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store student information
struct Student {
    int roll;
    char name[100];
    char address[200];
};

// Function to add a student's record to the file
void addStudentRecord() {
    FILE *file;
    struct Student student;

    file = fopen("student.dat", "ab");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter name: ");
    getchar(); // Clear newline from buffer
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove newline character
    printf("Enter address: ");
    fgets(student.address, sizeof(student.address), stdin);
    student.address[strcspn(student.address, "\n")] = '\0'; // Remove newline character

    // Write the student record to the file
    fwrite(&student, sizeof(struct Student), 1, file);

    // Close the file
    fclose(file);

    printf("Record added successfully.\n");
}

// Function to retrieve a student's record by roll number
void getStudentRecord() {
    FILE *file;
    struct Student student;
    int roll, found = 0;

    file = fopen("student.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    // Read student records from the file
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.roll == roll) {
            printf("Record found:\n");
            printf("Roll Number: %d\n", student.roll);
            printf("Name: %s\n", student.name);
            printf("Address: %s\n", student.address);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record found for roll number %d.\n", roll);
    }

    // Close the file
    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent Records System\n");
        printf("1. Add Student Record\n");
        printf("2. Get Student Record\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                getStudentRecord();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
