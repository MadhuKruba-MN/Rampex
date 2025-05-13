#include <stdio.h>

int main() {
    float marks;

  
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 35) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}