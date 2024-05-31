//Write a program to generate all amicable pairs of numbers less than or equal to 10000.
#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 1; // Start with 1 since it's always a proper divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) // Avoid counting the square root twice
                sum += num / i;
        }
    }
    return sum;
}

int main() {
    printf("Amicable pairs less than or equal to 10000:\n");
    for (int num1 = 1; num1 <= 10000; num1++) {
        int num2 = sumOfDivisors(num1);
        if (num1 < num2 && sumOfDivisors(num2) == num1) {
            printf("(%d, %d)\n", num1, num2);
        }
    }
    return 0;
}
