#include <stdio.h>
int power(int b, int c) {
    int result = 1;
    for(int i = 0; i < c; i++) {
        result *= b;
    }
    return result;
}
int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    int result = power(base, exponent);
    printf("%d raised to the power %d is %d\n", base, exponent, result);
    return 0;
}