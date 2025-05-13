#include<stdio.h>
int main() {
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int sum = a + b + c + d + e;
    float avg = sum / 5.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    return 0;
}