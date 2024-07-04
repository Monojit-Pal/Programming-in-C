//Write a program to solve the problem of Towers of Hanoi.

#include<stdio.h>

void towers_of_hanoi(int n, char source, char auxiliary, char destination);

int main()
{
    int n; // Number of disks

    // Get the number of disks from the user
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Solve the Towers of Hanoi problem
    printf("The moves are:\n");
    towers_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}

void towers_of_hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        // Base case: Only one disk to move
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary, using destination as auxiliary
    towers_of_hanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    towers_of_hanoi(n - 1, auxiliary, source, destination);
}