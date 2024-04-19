//Write a function to convert celsius to fahrenheit
#include<stdio.h>

float convertTemp(float celsius);

int main()
{
    float cel;
    printf("\nEnter temperature in Celsius: ");
    scanf("%f",&cel);
    printf("\nTemperature in Fahrenheut: %f",convertTemp(cel));
    return 0;
}

float convertTemp(float celsius)
{
    float far=celsius*(9.0/5.0)+32;
    return far;
}