//Write a program to generate the non-Fibonacci numbers upto a given limit (number) provided by the user.

#include<stdio.h>

int main() {
    int n, a, b, c, d, x;
    a = 0;
    b = 1;
    c = 0;
    printf("Enter the upper range of the series: ");
    scanf("%d", &n);
    while (c <= n) {
        c = a + b;
        a = b;
        b = c;
        d = a + b;
        for (x = c + 1; x < d && x <= n; x++) {
            printf("%d\t", x);
        }
    }
    return 0;
}
