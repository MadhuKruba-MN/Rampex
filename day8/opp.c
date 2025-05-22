#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int mul(int x, int y) {
    return x * y;
}
float div(int x, int y) {
    if (y != 0)
        return (float)x / y;
    else {
        printf("Error: Division by zero\n");
        return 0.0f;
    }
}
int main() {
    int a = 4, b = 7;
    printf("Addition: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtraction: %d - %d = %d\n", a, b, sub(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, mul(a, b));
    printf("Division: %d / %d = %.2f\n", a, b, div(a, b));
    return 0;
}
