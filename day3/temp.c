#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the temperature in degrees Celsius: ");
    scanf("%d", &temperature);


    if (temperature < 10) {
        printf("It's cold! Wear a jacket.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("It's cool. Wear a sweater.\n");
    } else if (temperature >= 20) {
        printf("It's warm. Wear a t-shirt.\n");
    } else {
        printf("Invalid temperature input.\n");
    }

    return 0;
}