/* Write a program using union and structure to find the value of y=x^n, where x and y
   are floating point numbers nd n is either integer or floating point. */

#include <stdio.h>
#include <math.h>

// Union to hold either an integer or a float value for n
union Number {
    int i;
    float f;
};

// Structure to hold the variables x, y, and n
struct PowerCalculation {
    float x;
    float y;
    union Number n;
    char isFloat; // flag to indicate if n is a float (1 if true, 0 if false)
};

// Function to calculate y = x^n
void calculatePower(struct PowerCalculation *pc) {
    if (pc->isFloat) {
        pc->y = pow(pc->x, pc->n.f);
    } else {
        pc->y = pow(pc->x, pc->n.i);
    }
}

int main() {
    struct PowerCalculation pc;

    // Taking input for x
    printf("Enter the value of x: ");
    scanf("%f", &pc.x);

    // Taking input for n as a float
    printf("Enter the value of n: ");
    scanf("%f", &pc.n.f);

    // Determine if n is an integer
    if (pc.n.f == (int)pc.n.f) {
        pc.n.i = (int)pc.n.f;
        pc.isFloat = 0;
    } else {
        pc.isFloat = 1;
    }

    // Perform the power calculation
    calculatePower(&pc);

    // Print the result
    printf("y = %.2f\n", pc.y);

    return 0;
}