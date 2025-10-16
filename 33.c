#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num) {
    int original = num, reverse = 0, digit;

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);

    return 0;
}
