#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", num, fact);
    return 0;
}