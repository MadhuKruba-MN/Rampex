#include <stdio.h>

int main() {
    int a, b, c, result;


    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    
    result = a + b * c - (a / b);

  
    printf("The result of the expression a + b * c - (a / b) is: %d\n", result);

    return 0;
}