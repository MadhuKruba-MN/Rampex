#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}