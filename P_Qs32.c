//Write a program to enter price of 3 items & print their final cost with gst using array.
#include<stdio.h>
int main()
{
    float price[3];
    printf("\nEnter price of 3 items: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("\nFinal cost of 1: %f",price[0]+(0.18*price[0]));
    printf("\nFinal cost of 2: %f",price[1]+(0.18*price[1]));
    printf("\nFinal cost of 3: %f",price[2]+(0.18*price[2]));
    return 0;
}