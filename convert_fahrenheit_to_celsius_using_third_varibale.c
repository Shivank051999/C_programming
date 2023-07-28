#include <stdio.h>

int main()
{
    
    float fahrenheit, celsius, fever;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);
    
    fever = celsius;
    
    printf("fever is  %.2f ", fever);

    return 0;
}