#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;  // Get last digit

    while(n >= 10) {
        n /= 10;  // Remove last digit until first remains
    }
    firstDigit = n;  // Remaining digit is the first digit

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);
    return 0;
}
