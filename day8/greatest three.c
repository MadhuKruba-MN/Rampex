#include <stdio.h>
int greatestOfThree(int a, int b, int c) {
    int greatest = a;
    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;
    return greatest;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatest = greatestOfThree(num1, num2, num3);
    printf("The greatest number is %d\n", greatest);
    return 0;
}