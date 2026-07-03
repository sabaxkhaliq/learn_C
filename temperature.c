#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    // Input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    // Output
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}