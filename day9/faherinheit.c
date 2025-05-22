#include<stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius(f));
    return 0;
}