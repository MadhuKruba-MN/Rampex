#include <stdio.h>

int main() {
    char ch;
         printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("The character is a vowel.\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is a consonant.\n");
    } else {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }

    return 0;
}