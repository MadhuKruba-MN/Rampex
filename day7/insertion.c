#include <stdio.h>
int main() {
    int n = 5, num = 35, pos = 1, i;
    int arr[6] = {10, 20, 30, 40, 50}; 
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    num++;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}