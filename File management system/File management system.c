#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a new file
void createFile(char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to create file '%s'\n", filename);
    } else {
        printf("File '%s' created successfully\n", filename);
        fclose(file);
    }
}

// Function to delete a file
void deleteFile(char *filename) {
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully\n", filename);
    } else {
        printf("Error: Unable to delete file '%s'\n", filename);
    }
}

// Function to copy a file
void copyFile(char *source, char *destination) {
    FILE *sourceFile = fopen(source, "rb");
    FILE *destinationFile = fopen(destination, "wb");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error: Unable to copy file '%s' to '%s'\n", source, destination);
    } else {
        char buffer[1024];
        size_t bytes_read;

        while ((bytes_read = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
            fwrite(buffer, 1, bytes_read, destinationFile);
        }

        printf("File '%s' copied to '%s' successfully\n", source, destination);

        fclose(sourceFile);
        fclose(destinationFile);
    }
}

// Function to move/rename a file
void moveFile(char *source, char *destination) {
    if (rename(source, destination) == 0) {
        printf("File '%s' moved/renamed to '%s' successfully\n", source, destination);
    } else {
        printf("Error: Unable to move/rename file '%s' to '%s'\n", source, destination);
    }
}

int main() {
    char filename[100], destination[100];
    int choice;

    // Menu for file management operations
    printf("File Management System\n");
    printf("1. Create File\n");
    printf("2. Delete File\n");
    printf("3. Copy File\n");
    printf("4. Move/Rename File\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the name of the file to create: ");
            scanf("%s", filename);
            createFile(filename);
            break;
        case 2:
            printf("Enter the name of the file to delete: ");
            scanf("%s", filename);
            deleteFile(filename);
            break;
        case 3:
            printf("Enter the name of the source file: ");
            scanf("%s", filename);
            printf("Enter the name of the destination file: ");
            scanf("%s", destination);
            copyFile(filename, destination);
            break;
        case 4:
            printf("Enter the name of the source file: ");
            scanf("%s", filename);
            printf("Enter the new name/destination of the file: ");
            scanf("%s", destination);
            moveFile(filename, destination);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
