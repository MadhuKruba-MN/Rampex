#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float radius, length, breadth, side, area;

    // Display menu
    printf("Area Calculation Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Area of Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;

        case 2:
          
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("The area of the rectangle is: %.2f\n", area);
            break;

        case 3:
            
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;
}