#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {

        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);
    } else if (choice == 2) {
    
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius.\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}