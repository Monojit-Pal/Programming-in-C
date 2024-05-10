#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// User structure with phone, account, password, balance, and name
struct user {
    char phone[50];
    char ac[50];
    char name[100];
    char password[50];
    float balance;
};

// Function to clear the screen for different operating systems
void clear_screen() {
    // Clear screen depending on operating system
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    struct user usr, usr1;
    FILE *fp;
    char filename[50], phone[50], pword[50];
    int opt, choice;
    char cont = 'y';
    float amount;

    while (1) {
        // Main menu prompt with welcome message
        clear_screen();
        printf("Welcome to Pal Financial Services!\n");
        printf("---------------------------------\n");
        printf("\nWhat do you want to do?");
        printf("\n\n1. Register an account");
        printf("\n2. Login to an account");
        printf("\n3. Exit");
        printf("\n\nYour choice:\t");
        scanf("%d", &opt);

        if (opt == 3) {
            // Exit the program
            clear_screen();
            printf("\nThank you for using our service!");
            break; // Exit the loop
        }

        if (opt == 1) {
            // Account registration
            clear_screen();
            printf("Enter your name:\t");
            getchar(); // Consume newline
            fgets(usr.name, sizeof(usr.name), stdin);
            usr.name[strcspn(usr.name, "\n")] = '\0'; // Remove newline
            printf("Enter your account number:\t");
            scanf("%s", usr.ac);
            printf("Enter your phone number:\t");
            scanf("%s", usr.phone);
            printf("Enter your new password:\t");
            scanf("%s", usr.password);
            usr.balance = 0;
            strcpy(filename, usr.phone);
            fp = fopen(strcat(filename, ".dat"), "w");
            if (fwrite(&usr, sizeof(struct user), 1, fp) != 0) {
                printf("\nAccount successfully registered.");
                // Ask if the user wants to continue
                printf("\nWould you like to continue? [y/n]\t");
                scanf(" %c", &cont);
                if (cont == 'n') {
                    clear_screen();
                    printf("\nThank you for using our service!");
                    break; // Exit the loop
                }
            } else {
                printf("\nSomething went wrong. Please try again.");
            }
            fclose(fp);

            if (cont == 'y') {
                continue; // Return to the main menu
            }
        }

        if (opt == 2) {
            // Login process
            clear_screen();
            printf("\nPhone number:\t");
            scanf("%s", phone);
            strcpy(filename, phone);
            fp = fopen(strcat(filename, ".dat"), "r");
            if (fp == NULL) {
                printf("\nAccount not registered. Would you like to try again? [y/n]\t");
                scanf(" %c", &cont);
                if (cont == 'y') {
                    continue; // Return to the main menu
                } else {
                    clear_screen();
                    printf("\nThank you for using our service!");
                    break; // Exit the loop
                }
            }
            
            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);

            // Check the password
            printf("Password:\t");
            scanf("%s", pword);
            if (strcmp(pword, usr.password) == 0) {
                printf("\n\t\tWelcome, %s", usr.name);
                cont = 'y';
                while (cont == 'y') {
                    clear_screen();
                    printf("\nWelcome, %s!\n", usr.name);
                    printf("\n\nPress 1 for balance inquiry");
                    printf("\nPress 2 for depositing cash");
                    printf("\nPress 3 for cash withdrawal");
                    printf("\nPress 4 for online transfer");
                    printf("\nPress 5 for password change");
                    printf("\nPress 6 to exit");
                    printf("\n\nYour choice:\t");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            // Balance inquiry
                            printf("\nYour current balance is Rs. %.2f", usr.balance);
                            break;
                        case 2:
                            // Deposit cash
                            printf("\nEnter the amount:\t");
                            scanf("%f", &amount);
                            usr.balance += amount;
                            fp = fopen(filename, "w");
                            fwrite(&usr, sizeof(struct user), 1, fp);
                            if (fwrite != NULL) {
                                printf("\nSuccessfully deposited.");
                            }
                            fclose(fp);
                            break;
                        case 3:
                            // Cash withdrawal with balance check
                            printf("\nEnter the amount:\t");
                            scanf("%f", &amount);
                            if (amount > usr.balance) {
                                printf("\nInsufficient balance to withdraw.");
                            } else {
                                usr.balance -= amount;
                                fp = fopen(filename, "w");
                                fwrite(&usr, sizeof(struct user), 1, fp);
                                if (fwrite != NULL) {
                                    printf("\nYou have withdrawn Rs. %.2f", amount);
                                }
                                fclose(fp);
                            }
                            break;
                        case 4:
                            // Online transfer with balance and account checks
                            while (1) {
                                printf("\nPlease enter the phone number to transfer balance:\t");
                                scanf("%s", phone);
                                strcpy(filename, phone);
                                fp = fopen(strcat(filename, ".dat"), "r");
                                if (fp == NULL) {
                                    printf("\nAccount not registered. Would you like to try again or return to the main screen? [1 - Try Again / 2 - Main Screen]\t");
                                    int transfer_opt;
                                    scanf("%d", &transfer_opt);
                                    if (transfer_opt == 2) {
                                        break; // Return to main screen
                                    }
                                } else {
                                    fread(&usr1, sizeof(struct user), 1, fp);
                                    fclose(fp);

                                    printf("\nPlease enter the amount to transfer:\t");
                                    scanf("%f", &amount);
                                    if (amount > usr.balance) {
                                        printf("\nInsufficient balance to transfer.");
                                    } else {
                                        usr1.balance += amount;
                                        fp = fopen(filename, "w");
                                        fwrite(&usr1, sizeof(struct user), 1, fp);
                                        fclose(fp);

                                        usr.balance -= amount;
                                        strcpy(filename, usr.phone);
                                        fp = fopen(strcat(filename, ".dat"), "w");
                                        fwrite(&usr, sizeof(struct user), 1, fp);
                                        fclose(fp);

                                        printf("\nSuccessfully transferred Rs. %.2f to %s.", amount, phone);
                                    }
                                    break; // Exit the while loop
                                }
                            }
                            break;
                        case 5:
                            // Password change
                            printf("\nPlease enter your new password:\t");
                            scanf("%s", pword);
                            strcpy(usr.password, pword);
                            fp = fopen(filename, "w");
                            fwrite(&usr, sizeof(struct user), 1, fp);
                            if (fwrite != NULL) {
                                printf("\nPassword successfully changed.");
                            }
                            fclose(fp);
                            break;
                        case 6:
                            // Exit
                            printf("\nExiting...");
                            cont = 'n'; // End loop
                            break;
                        default:
                            printf("\nInvalid choice. Please try again.");
                            continue; // Ask for choice again
                    }

                    if (cont == 'n') {
                        clear_screen(); // Clear screen and thank you message
                        printf("\nThank you for using our service!");
                        break; // Exit the loop
                    }

                    // Ask if the user wants to continue
                    printf("\nDo you want to continue the transaction [y/n]?\t");
                    scanf(" %c", &cont);
                    if (cont == 'n') {
                        clear_screen(); // Clear screen and thank you message
                        printf("\nThank you for using our service!");
                        break; // Exit the loop
                    }
                }
            } else {
                printf("\nInvalid password. Would you like to re-enter or exit? [1 - Re-enter / 2 - Exit]\t");
                int retry_opt;
                scanf("%d", &retry_opt);
                if (retry_opt == 2) {
                    clear_screen();
                    printf("\nThank you for using our service!");
                    break; // Exit the loop
                }
            }
        }
    }

    return 0;
}