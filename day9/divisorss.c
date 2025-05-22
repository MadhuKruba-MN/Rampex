#include<stdio.h>

int sumOfDivisors(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    } 
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of divisors of %d is %d\n", num, sumOfDivisors(num));
    return 0;
}
